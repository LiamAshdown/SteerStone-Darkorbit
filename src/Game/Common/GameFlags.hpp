/*
* Liam Ashdown
* Copyright (C) 2022
*
* Thisprogram isfree software: you can redistribute it and/or modify
* it under the termsof the GNU General Public License aspublished by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* Thisprogram isdistributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY, without even the implied warranty of
* MERCHANTABILITY or FITNESsFOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with thisprogram.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#include <PCH/Precompiled.hpp>
#include "Core/Core.hpp"

#define PLAYER_RADIUS_SCAN 1000.0f

enum PlayerShips
{
    Phoenix     = 1,
    Yamato      = 2,
    Leonov      = 3,
    Defcom      = 4,
    Liberator   = 5,
    Piranha     = 6,
    Nostromo    = 7,
    Vengeance   = 8,
    Bigboy      = 9,
    Goliath     = 10,
    GGoliath    = 52,
    CBSGoliath  = 53
};

/*
pes[5] = "direct";
var npcships = new Array();
npcships[1] = "Streuner";
npcships[2] = "Lordakia";
npcships[3] = "Devolarium";
npcships[4] = "Mordon";
npcships[5] = "Sibelon";
npcships[6] = "Saimon";
npcships[7] = "Sibelonit";
npcships[8] = "Lordakium";
npcships[9] = "Kristallin";
npcships[10] = "Kristallon";
npcships[11] = "StreuneR";
npcships[12] = "Protegit";
npcships[13] = "Cubikon";
npcships[14] = "Boss Streuner";
npcships[15] = "Boss Lordakia";
npcships[16] = "Boss Mordon";
npcships[17] = "Boss Saimon";
npcships[18] = "Boss Devolarium";
npcships[19] = "Boss Sibelonit";
npcships[20] = "Boss Sibelon";
npcships[21] = "Boss Lordakium.";
npcships[22] = "Boss Kristallin";
npcships[23] = "Boss Kristallon";
npcships[24] = "Boss StreuneR";
npcships[25] = "UFO";
npcships[26] = "UFONIT";
npcships[27] = "Aggro-Streuner";
npcships[28] = "UberStreuner";
npcships[29] = "UberLordakia";
npcships[30] = "UberMordon";
npcships[31] = "UberSaimon";
npcships[32] = "UberDevolarium";
npcships[33] = "UberSibelonit";
npcships[34] = "UberSibelon";
npcships[35] = "UberLordakium";
npcships[36] = "UberKristallin";
npcships[37] = "UberKristallon";
npcships[38] = "UberStreuneR";
var playerships = new Array();
playerships[1] = "Phoenix";
playerships[2] = "Yamato";
playerships[3] = "Leonov";
playerships[4] = "Defcom";
playerships[5] = "Liberator";
playerships[6] = "Piranha";
playerships[7] = "Nostromo";
playerships[8] = "Vengeance";
playerships[9] = "Bigboy";
playerships[10] = "Goliath";
playerships[52] = "7G-Goliath";
playerships[53] = "CBS-Goliath";
var ore_names = new Array();
ore_names[1] = _root.resource.ore_prometium;
*/

enum NpcShips
{
    Streuner            = 2,
    Lordakia            = 71,
    Devolarium          = 72,
    Mordon              = 73,
    Sibelon             = 74,
    Saimon              = 75,
    Sibelonit           = 76,
    Lordakium           = 77,
    Kristallin          = 78,
    Kristallon          = 79,
    StreuneR            = 4,
    Protegit            = 12,
    Cubikon             = 13,
    BossStreuner        = 14,
    BossLordakia        = 15,
    BossMordon          = 16,
    BossSaimon          = 17,
    BossDevolarium      = 18,
    BossSibelonit       = 19,
    BossSibelon         = 20,
    BossLordakium       = 21,
    BossKristallin      = 22,
    BossKristallon      = 23,
    BossStreuneR        = 24,
    UFO                 = 25,
    UFONIT              = 26,
    AggroStreuner       = 27,
    UberStreuner        = 28,
    UberLordakia        = 29,
    UberMordon          = 30,
    UberSaimon          = 31,
    UberDevolarium      = 32,
    UberSibelonit       = 33,
    UberSibelon         = 34,
    UberLordakium       = 35,
    UberKristallin      = 36,
    UberKristallon      = 37,
    UberStreuneR        = 38,
};

enum MiscConditionType
{
    NOTHING               = 0,
    ON_ENEMY_MAP          = 1,
    ON_PVP_MAP            = 2,
    VISIBLE               = 3,
    INVISIBLE             = 4,
    IN_RADIATION_AREA     = 5,
    INSTANT_SHIELD_ACTIVE = 6,
    LOW_ON_LIFE           = 7,
    ATTACKING             = 8,
    ATTACKED              = 9,
    MARTYR                = 10,
    REPAIRING             = 11,
    OUTLAW                = 12,
    ON_HOME_MAP           = 13,
    ON_HOSTILE_HOME_MAP   = 14,
    ON_MARS_MAP           = 15,
    ON_EARTH_MAP          = 16,
    ON_VENUS_MAP          = 17,
    ON_OWN_FACTION_MAP    = 18,
    ON_X_1                = 19,
    ON_X_2                = 20,
    ON_X_3                = 21,
};

enum DamageType
{
    DAMAGE_TYPE_ANY         = 0,
    DAMAGE_TYPE_LASER       = 1,
    DAMAGE_TYPE_ROCKET      = 2,
    DAMAGE_TYPE_MINE        = 3,
    DAMAGE_TYPE_RADIATION   = 4,
    DAMAGE_TYPE_DIRECT      = 5
};

enum class Company : uint16
{
    NOMAD        = 0,
    MMO          = 1,
    EARTH        = 2,
    VRU          = 3,
    MAX_COMPANY  = 4
};

enum InventoryType
{
    INVENTORY_TYPE_BATTERY              = 0,
    INVENTORY_TYPE_SPEED_GENERATOR      = 1,
    INVENTORY_TYPE_SHIELD_GENERATOR     = 2,
    INVENTORY_TYPE_EXTRAS			    = 7,
};

enum RocketType
{
    ROCKET_TYPE_NONE     = 0,
    ROCKET_TYPE_R310     = 1,
    ROCKET_TYPE_PLT_2026 = 2,
    ROCKET_TYPE_PLT_2021 = 3,
    MAX_ROCKET           = 4
};

enum RocketDamage
{
    ROCKET_DAMAGE_R310        = 1000,
    ROCKET_DAMAGE_PLT_2026    = 2000,
    ROCKET_DAMAGE_PLT_2021    = 4000
};

enum BatteryType : uint16
{
    BATTERY_TYPE_NONE   = 0,
    BATTERY_TYPE_LCB10  = 1,
    BATTERY_TYPE_MCB25  = 2,
    BATTERY_TYPE_MCB50  = 3,
    BATTERY_TYPE_UCB100 = 4,
    BATTERY_TYPE_SAB50  = 5,
    MAX_BATTERY         = 6
};

enum MinesType
{
    MINE            = 0,
    SMART_BOMB      = 1,
    INSTANT_SHIELD  = 2,
    MAX_MINES       = 3
};

enum class PortalType : uint16
{
    PORTAL_TYPE_NORMAL      = 0,
    PORTAL_TYPE_GALAXY_GATE = 1,
};

enum class StationType : uint16
{
    STATION_TYPE_NORMAL     = 0,
    STATION_TYPE_UNKNOWN    = 1
};

enum Rank
{
    BASIC_SPACE_PILOT = 1,
    SPACE_PILOT       = 2,
    CHIEF_SPACE_PILOT = 3,
    BASIC_SERGEANT    = 4,
    SERGEANT          = 5,
    CHIEF_SERGEANT    = 6,
    BASIC_LIEUTENANT  = 7,
    LIEUTENANT        = 8,
    CHIEF_LIEUTENANT  = 9,
    BASIC_CAPTAIN     = 10,
    CAPTAIN           = 11,
    CHIEF_CAPTAIN     = 12,
    BASIC_MAJOR       = 13,
    MAJOR             = 14,
    CHIEF_MAJOR       = 15,
    BASIC_COLONEL     = 16,
    COLONEL           = 17,
    CHIEF_COLONEL     = 18,
    BASIC_GENERAL     = 19,
    GENERAL           = 20,
    ADMIN             = 21,
};

enum class EventType
{
    EVENT_TYPE_NONE    = 0,
    EVENT_TYPE_PORTAL  = 1,
    EVENT_TYPE_STATION = 2,
    EVENT_TYPE_RADIATION_ZONE = 3
};

enum class MapType
{
    MAP_TYPE_NORMAL,
    MAP_TYPE_BIG
};

enum DroneType
{
    DRONE_TYPE_FLAK = 0,
    DRONE_TYPE_IRIS = 1
};

enum DroneLevel
{
    DRONE_LEVEL_1 = 1,
    DRONE_LEVEL_2 = 2,
    DRONE_LEVEL_3 = 3,
    DRONE_LEVEL_4 = 4,
    DRONE_LEVEL_5 = 5,
    DRONE_LEVEL_6 = 6
};

enum class BonusBoxType
{
    BONUS_BOX_TYPE_CARGO = 0,
    BONUS_BOX_TYPE_BONUS = 2
};

enum class BonusBoxRewardType
{
    BONUS_BOX_REWARD_TYPE_CREDITS,
    BONUS_BOX_REWARD_TYPE_URIDIUM,
    BONUS_BOX_REWARD_TYPE_LCB10,
    BONUS_BOX_REWARD_TYPE_MCB25,
    BONUS_BOX_REWARD_TYPE_MCB50,
    BONUS_BOX_REWARD_TYPE_SAB50
};

enum WeaponState
{
    WEAPON_STATE_NOT_EQUIPPED   = 0,
    WEAPON_STATE_SEMI_EQUIPPED  = 1,
    WEAPON_STATE_FULLY_EQUIPPED = 2
};

namespace LevelExperience
{
    enum Level : uint64
    {
        LEVEL_1 = 0,
        LEVEL_2 = 10000,
        LEVEL_3 = 20000,
        LEVEL_4 = 40000,
        LEVEL_5 = 80000,
        LEVEL_6 = 160000,
        LEVEL_7 = 320000,
        LEVEL_8 = 640000,
        LEVEL_9 = 1280000,
        LEVEL_10 = 2560000,
        LEVEL_11 = 5120000,
        LEVEL_12 = 10240000,
        LEVEL_13 = 20480000,
        LEVEL_14 = 40960000,
        LEVEL_15 = 81920000,
        LEVEL_16 = 163840000,
        LEVEL_17 = 327680000,
        LEVEL_18 = 655360000,
        LEVEL_19 = 1310720000,
        LEVEL_20 = 2621440000,
        LEVEL_21 = 5242880000,
        LEVEL_22 = 10485760000,
        LEVEL_23 = 20971520000,
        LEVEL_24 = 41943040000,
        LEVEL_25 = 83886080000,
        LEVEL_26 = 167772160000,
        LEVEL_27 = 335544320000,
        LEVEL_28 = 671088640000,
        MAX_LEVEL = 28
    };

    static const Level All[] = { LEVEL_1, LEVEL_2, LEVEL_3,
                                 LEVEL_4, LEVEL_5, LEVEL_6,
                                 LEVEL_7, LEVEL_8, LEVEL_9,
                                 LEVEL_10, LEVEL_11, LEVEL_12,
                                 LEVEL_13, LEVEL_14, LEVEL_15,
                                 LEVEL_16, LEVEL_17, LEVEL_18,
                                 LEVEL_19, LEVEL_20, LEVEL_21,
                                 LEVEL_22, LEVEL_23, LEVEL_24,
                                 LEVEL_25, LEVEL_26, LEVEL_27,
                                 LEVEL_28 };

}   ///< namespace LevelExperience

enum class LogBookType : uint16
{
    LOG_BOOK_TYPE_OVERVIEW = 0,
    LOG_BOOK_TYPE_DETAILED = 1
};

enum class BoosterTypes : uint8
{
    BOOSTER_TYPE_XP_B01     = 25,
    BOOSTER_TYPE_HON_B01    = 26,
    BOOSTER_TYPE_DMG_B01    = 27,
    BOOSTER_TYPE_SHD_B01    = 28,
    MAX_BOOSTER             = 29
};

enum class OreTypes : uint8
{
    ORE_TYPE_PROMETIUM = 1,
    ORE_TYPE_ENDURIUM  = 2,
    ORE_TYPE_TERBIUM   = 3,
    MAX_ORE            = 4
};

/// Note these are the ids from the client
enum class OreResource : uint8
{
	ORE_PROMETIUM       = 1,
    ORE_ENDURIUM        = 2,
    ORE_TERBIUM         = 3,
    ORE_XENOMIT         = 4,
    ORE_PROMETID        = 11,
    ORE_DURANIUM        = 12,
    ORE_PROMERIUM       = 13,
    ORE_SEPROM          = 14,
    ORE_PALLADIUM       = 15,
};

enum class ItemTemplatesId : uint8
{
    ITEM_TEMPLATE_ID_LF3	    = 4,
    ITEM_TEMPLATE_ID_LCB_10     = 16,
    ITEM_TEMPLATE_ID_MCB_25     = 17,
    ITEM_TEMPLATE_ID_MCB_50     = 18,
    ITEM_TEMPLATE_ID_SAB_50     = 19,
    ITEM_TEMPLATE_ID_R_310      = 20,
    ITEM_TEMPLATE_ID_PLT_2026   = 21,
    ITEM_TEMPLATE_ID_PLT_2021   = 22,
    ITEM_TEMPLATE_ID_ACM_01     = 30,
    ITEM_TEMPLATE_ID_AIM_01     = 31,
    ITEM_TEMPLATE_ID_AM_CPU     = 32,
    ITEM_TEMPLATE_ID_ROK_T01    = 33,
    ITEM_TEMPLATE_ID_JP_01      = 34,
    ITEM_TEMPLATE_ID_JP_02      = 35,
    ITEM_TEMPLATE_ID_REP_1      = 36,
    ITEM_TEMPLATE_ID_REP_2      = 37,
    ITEM_TEMPLATE_ID_REP_3      = 38,
    ITEM_TEMPLATE_AROL_X		= 39,
    ITEM_TEMPLATE_CLOAK_X		= 40,
    ITEM_TEMPLATE_SMART_BOMB	= 41,
    ITEM_TEMPLATE_INSTANT_SHIELD = 42,
};

enum class JumpChipType : uint8
{
    JUMP_CHIP_TYPE_NONE  = 0,
    JUMP_CHIP_TYPE_JP_01 = 1,
    JUMP_CHIP_TYPE_JP_02 = 2,
};

enum CompanyMapId : uint8
{
    COMPANY_MAP_ID_MMO_1X1      = 1,
    COMPANY_MAP_ID_MMO_1X2      = 2,
    COMPANY_MAP_ID_MMO_1X3      = 3,
    COMPANY_MAP_ID_EIC_1X4      = 4,
    COMPANY_MAP_ID_EIC_2X1      = 5,
    COMPANY_MAP_ID_EIC_2X2      = 6,
    COMPANY_MAP_ID_EIC_2X3      = 7,
    COMPANY_MAP_ID_EIC_2X4      = 8,
    COMPANY_MAP_ID_VRU_3X1      = 9,
    COMPANY_MAP_ID_VRU_3X2      = 10,
    COMPANY_MAP_ID_VRU_3X3      = 11,
    COMPANY_MAP_ID_VRU_3X4      = 12,
    COMPANY_MAP_ID_NOMAN_4X4    = 13,
    COMPANY_MAP_ID_MMO_4X1      = 14,
    COMPANY_MAP_ID_MMO_4X2      = 15,
    COMPANY_MAP_ID_MMO_4X3      = 16,
    COMPANY_MAP_ID_MMO_1X5	    = 17,
    COMPANY_MAP_ID_MMO_1X6      = 18,
    COMPANY_MAP_ID_MMO_1X7	    = 19,
    COMPANY_MAP_ID_MMO_1X8	    = 20,
    COMPANY_MAP_ID_EIC_2X5	    = 21,
    COMPANY_MAP_ID_EIC_2X6	    = 22,
    COMPANY_MAP_ID_EIC_2X7	    = 23,
    COMPANY_MAP_ID_EIC_2X8	    = 24,
    COMPANY_MAP_ID_VRU_3X5	    = 25,
    COMPANY_MAP_ID_VRU_3X6	    = 26,
    COMPANY_MAP_ID_VRU_3X7	    = 27,
    COMPANY_MAP_ID_VRU_3X8	    = 28,
    COMPANY_MAP_NOMAN_4X5	    = 29,

};

enum class ItemType : uint8
{
    ITEM_TYPE_REPAIR_BOT    = 0,
};

enum class LabUpgradeType : uint8
{
    LAB_UPGRADE_TYPE_NONE           = 0,
    LAB_UPGRADE_TYPE_LASERS         = 1,
    LAB_UPGRADE_TYPE_ROCKETS        = 2,
    LAB_UPGRADE_TYPE_SHIELDS 	    = 3,
    LAB_UPGRADE_TYPE_ENGINES 	    = 4,
};

enum ConditionType {
    CONDITION_TYPE_QUESTCASE = 0, //< Not used
    CONDITION_TYPE_TIMER = 1,
    CONDITION_TYPE_HASTE = 2,
    CONDITION_TYPE_ENDURANCE = 3,
    CONDITION_TYPE_COUNTDOWN = 4,
    CONDITION_TYPE_COLLECT = 5,
    CONDITION_TYPE_KILL_NPC = 6,
    CONDITION_TYPE_DAMAGE = 7,
    CONDITION_TYPE_AVOID_DAMAGE = 8,
    CONDITION_TYPE_TAKE_DAMAGE = 9,
    CONDITION_TYPE_AVOID_DEATH = 10,
    CONDITION_TYPE_COORDINATES = 11,
    CONDITION_TYPE_DISTANCE = 12,
    CONDITION_TYPE_TRAVEL = 13,
    CONDITION_TYPE_FUEL_SHORTAGE = 14,
    CONDITION_TYPE_PROXIMITY = 15,
    CONDITION_TYPE_MAP = 16,
    CONDITION_TYPE_MAP_DIVERSE = 17,
    CONDITION_TYPE_EMPTY = 18,
    CONDITION_TYPE_MISCELLANEOUS = 19,
    CONDITION_TYPE_AMMUNITION = 20,
    CONDITION_TYPE_SAVE_AMMUNITION = 21,
    CONDITION_TYPE_SPEND_AMMUNITION = 22,
    CONDITION_TYPE_SALVAGE = 23,
    CONDITION_TYPE_STEAL = 24,
    CONDITION_TYPE_KILL = 25,
    CONDITION_TYPE_DEAL_DAMAGE = 26,
    CONDITION_TYPE_KILL_NPCS = 27,
    CONDITION_TYPE_KILL_PLAYERS = 28,
    CONDITION_TYPE_DAMAGE_NPCS = 29,
    CONDITION_TYPE_DAMAGE_PLAYERS = 30,
    CONDITION_TYPE_VISIT_MAP = 31,
    CONDITION_TYPE_DIE = 32,
    CONDITION_TYPE_AVOID_KILL_NPC = 33,
    CONDITION_TYPE_AVOID_KILL_NPCS = 34,
    CONDITION_TYPE_AVOID_KILL_PLAYERS = 35,
    CONDITION_TYPE_AVOID_DAMAGE_NPCS = 36,
    CONDITION_TYPE_AVOID_DAMAGE_PLAYERS = 37,
    CONDITION_TYPE_PREVENT = 38,
    CONDITION_TYPE_JUMP = 39,
    CONDITION_TYPE_AVOID_JUMP = 40,
    CONDITION_TYPE_STEADINESS = 41,
    CONDITION_TYPE_MULTIPLIER = 42,
    CONDITION_TYPE_STAY_AWAY = 43,
    CONDITION_TYPE_IN_GROUP = 44,
    CONDITION_TYPE_KILL_ANY = 45,
    CONDITION_TYPE_WEB = 46,
    CONDITION_TYPE_CLIENT = 47,
    CONDITION_TYPE_CARGO = 48,
    CONDITION_TYPE_SELL_ORE = 49,
    CONDITION_TYPE_LEVEL = 50
};

enum AttributeKeys
{
    ATTRIBUTE_KEY_TIME_CURRENT      = 1,
    ATTRIBUTE_KEY_TIME_TARGET       = 2,
    ATTRIBUTE_KEY_NPC_ID            = 3,
    ATTRIBUTE_KEY_COUNT_CURRENT     = 4,
    ATTRIBUTE_KEY_COUNT_TARGET      = 5,
    ATTRIBUTE_KEY_AVATAR_ID         = 6,
    ATTRIBUTE_KEY_RADIUS            = 7,
    ATTRIBUTE_KEY_NPC_IDS           = 8,
    ATTRIBUTE_KEY_DAMAGE_TYPES      = 9,
    ATTRIBUTE_KEY_SHIP_TYPES        = 10,
    ATTRIBUTE_KEY_FACTIONS          = 11,
    ATTRIBUTE_KEY_AVATAR_IDS        = 12,
    ATTRIBUTE_KEY_ORE_ID            = 13,
    ATTRIBUTE_KEY_LOOT_TYPE         = 14,
    ATTRIBUTE_KEY_FACTION_ID        = 15,
    ATTRIBUTE_KEY_SHIP_TYPE         = 16,
    ATTRIBUTE_KEY_NPC_TYPE          = 17,
    ATTRIBUTE_KEY_MAP_ID            = 18,
    ATTRIBUTE_KEY_MAPS              = 19,
    ATTRIBUTE_KEY_MISC_COND_TYPE    = 20,
    ATTRIBUTE_KEY_WEB_COND_TYPE     = 21,
    ATTRIBUTE_KEY_CLIENT_COND_TYPE  = 22,
    ATTRIBUTE_KEY_ORE_TYPE          = 23,
    ATTRIBUTE_KEY_DAMANGE_TYPE      = 24,
};

enum RewardType : uint8
{
	REWARD_TYPE_NONE                = 0,
	REWARD_TYPE_CREDITS             = 1,
    REWARD_TYPE_AMMUNITION          = 2,
    REWARD_TYPE_EXPERIENCE_POINTS   = 3,
    REWARD_TYPE_URIDIUM             = 4,
    REWARD_TYPE_HONOUR              = 5,
};

enum AccessLevel
{
    ACCESS_LEVEL_PLAYER         = 0,
    ACCESS_LEVEL_MODERATOR      = 1,
    ACCESS_LEVEL_ADMIN          = 2,
    ACCESS_LEVEL_DEVELOPER	    = 3,
};