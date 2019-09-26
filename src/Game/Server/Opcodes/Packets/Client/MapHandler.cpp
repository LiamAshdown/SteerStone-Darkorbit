/*
* Liam Ashdown
* Copyright (C) 2019
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

#include "Server/MiscPackets.hpp"
#include "Server/MapPackets.hpp"
#include "Socket.hpp"
#include "Portal.hpp"
#include "Player.hpp"
#include "ZoneManager.hpp"
#include "World.hpp"
#include "GameFlags.hpp"

namespace SteerStone { namespace Game { namespace Server {

    /// Map Handler
    /// @p_ClientPacket : Packet recieved from client
    void GameSocket::HandleObjectMove(ClientPacket* p_Packet)
    {
        float l_NewPositionX = static_cast<float>(p_Packet->ReadUInt32());
        float l_NewPositionY = static_cast<float>(p_Packet->ReadUInt32());

        /// The client sends the current position - but we should never trust the client
        /// So skip this
        float l_PrevPositionX = static_cast<float>(p_Packet->ReadUInt32());
        float l_PrevPositionY = static_cast<float>(p_Packet->ReadUInt32());

        m_Player->GetSpline()->Move(l_NewPositionX, l_NewPositionY, 0, 0);
    }
    /// Map Handler
    /// @p_ClientPacket : Packet recieved from client
    void GameSocket::HandleInitializeOpponent(ClientPacket* p_Packet)
    {
        uint32 l_Id = p_Packet->ReadUInt32();

        /// Attempt to find player in map
        Entity::Object* l_Object = m_Player->GetMap()->FindObject(l_Id);
        
        if (!l_Object)
        {
            LOG_WARNING("Map", "Cannot find player Id: %0", l_Id);
            return;
        }

        m_Player->SendPacket(&m_Player->GetMap()->GetGrid(m_Player)->BuildObjectSpawn(l_Object, m_Player));
    }

    /// Map Handler
    /// @p_ClientPacket : Packet recieved from client
    void GameSocket::HandlePortalJump(ClientPacket* p_Packet)
    {
        Entity::Portal* l_Portal = m_Player->GetGrid()->CanJumpPortal(m_Player);

        /// Okay we can jump
        if (l_Portal)
        {
            /// Send Packet
            Server::Packets::JumpPortal l_Packet;
            l_Packet.MapId      = l_Portal->GetToMapId();
            l_Packet.PortalId   = l_Portal->GetObjectGUID().GetCounter();
            m_Player->SendPacket(l_Packet.Write());

            m_Player->GetMap()->AddToJumpQueue(m_Player, l_Portal);
            m_Player->m_Jumping = true;
        }
        else
        {
            Packets::Message l_Packet;
            l_Packet.Type = "STD";
            l_Packet.Text = "You are not near a portal!";
            SendPacket(l_Packet.Write());
        }
    }

    /// Map Handler
    /// @p_ClientPacket : Packet recieved from client
    void GameSocket::HandleSelectTarget(ClientPacket* p_Packet)
    {
        uint32 l_Id = p_Packet->ReadUInt32();

        /// Cannot target ourself
        if (l_Id == m_Player->GetObjectGUID().GetCounter())
            return;

        Entity::Object* l_Object = m_Player->GetMap()->FindObject(l_Id);

        if (!l_Object)
        {
            LOG_WARNING("Socket", "Attempted to find object %0 in map but does not exist!", l_Id);
            return;
        }

        m_Player->SetTarget(l_Object);
    }

    /// Map Handler
    /// @p_ClientPacket : Packet recieved from client
    void GameSocket::HandleLaserShoot(ClientPacket* p_Packet)
    {
        uint32 l_Id = p_Packet->ReadUInt32();

        /// Cannot target ourself
        if (l_Id == m_Player->GetObjectGUID().GetCounter())
            return;

        Entity::Object* l_Object = m_Player->GetMap()->FindObject(l_Id);

        if (!l_Object)
        {
            LOG_WARNING("Socket", "Attempted to find object %0 in map but does not exist!", l_Id);
            return;
        }

        m_Player->Attack(l_Object);

    }
}   ///< namespace Server
}   ///< namespace Game
}   ///< namespace SteerStone