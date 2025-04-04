/*
* Liam Ashdown
* Copyright (C) 2022
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#include <PCH/Precompiled.hpp>
#include "json.hpp"
#include "Singleton/Singleton.hpp"

#include "Room.hpp"
#include "Commands/Handler.hpp"

#define CHAT_SLEEP_TIMER 60

namespace SteerStone { namespace Chat { namespace Channel {
    typedef std::set<Entity::Player*> PlayerSet;

    /// Chat
    class Base
    {
        SINGLETON_P_D(Base);

        //////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////

    public:
        /// Add Player
        ///@ p_Player : Player
        void AddPlayer(Entity::Player* p_Player);
        /// Return Player in chat
        /// @p_Id : Id of player
        Entity::Player* FindPlayer(uint64 const p_Id);
        /// Find Player by Username
        /// @p_Username : Username of player
        Entity::Player* FindPlayerByUsername(const std::string p_Username);

        /// Load the standard default rooms
        void LoadRooms();

        /// Get Standard Rooms Based on Company
        /// @p_Company : Company
        std::map<uint32, Room*> GetStandardRoomsBasedOnCompany(const Company p_Company);

        /// Get Room by Id
        /// @p_Id : Room Id
        Room* GetRoomById(const uint16 p_Id);

        /// Check to see if room exists by name
        /// @p_Name : Room Name
        bool RoomExistsByName(const std::string p_Name);

        /// Add Room
        /// @p_Room : Room to add
        void AddRoom(Room* p_Room);

        /// Remove Room
        /// @p_Id : Room Id
        void RemoveRoom(const uint16 p_Id);

        /// Update Rooms
        /// This is to find out if the room is empty, if so, then remove the room
        /// @p_Diff : Time Diff
        void UpdateRooms(uint32 const p_Diff);

        /// Generate Room Id
        uint16 GenerateRoomId();

        /// Update the Chat
        ///@ p_Diff : Time Diff
        void Update(uint32 const p_Diff);
        /// Stop World Updating
        bool StopWorld() const;

        /// Process Incoming Command
        ///@ p_Input : Command to process
        ///@ p_Player : Player who is sending the command
        void ProcessCommand(const std::string& p_Input, Entity::Player* p_Player);

        /// Add Process Command
        ///@ p_Id : Player Id
        ///@ p_Command : Command to process
        void AddProcessCommand(const uint32 p_Id, const std::string p_Command, const nlohmann::json p_Json = nlohmann::json());

        /// Send System Message
        /// @p_Message : System Message
        void SendSystemMessage(const std::string p_Message);

        /// Ban Player
        /// @p_BannedUsername : Player who is banned
        /// @p_Player         : Player who banned the player
        /// @p_Reason         : Reason why player is banned
        /// @p_DaysHours      : How many days or hours the player is banned for
        void BanPlayer(const std::string p_BannedUsername, Entity::Player const* p_Player, const std::string p_Reason, std::string p_DaysHours);

        /// Check if player is banned
        /// If the player is banned, then send packet to let know user is banned (if true)
        /// @p_Player : Player who may be banned
        /// @p_SendPacket : Send Packet to banned player to inform the they are banned.
        const bool PlayerIsBanned(Entity::Player* p_Player, const bool p_SendPacket = true);

        /// Get the total players
        uint32 const TotalPlayers();

        //////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////

    private:
        PlayerSet m_Players;
        static volatile bool s_StopChat;                                   ///< Stop Chat Updating
        std::map<uint32, Room*> m_Rooms;                                   ///< Rooms
        Commands::Handler* m_CommandsHandler;                              ///< Commands Handler
    };
}   ///< namespace Channel
}   ///< namespace Chat
}   ///< namespace Steerstone

#define sChatManager SteerStone::Chat::Channel::Base::GetSingleton()