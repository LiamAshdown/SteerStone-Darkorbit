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

#include "Object.hpp"
#include "ZoneManager.hpp"

namespace SteerStone { namespace Game { namespace Entity {

    /// Constructor
    Object::Object()
        : m_Spline(this)
    {
        m_Type              = Type::OBJECT_TYPE_NON;
        m_Name.clear();
        m_GridIndex         = std::make_tuple(0, 0);
        m_NeedToBeUpdate    = false;
        m_ScheduleForDelete = false;
        m_Map               = nullptr;
    }
    /// Deconstructor
    Object::~Object()
    {
        LOG_ASSERT(m_Map == nullptr, "Object", "Object is not removed from map before delete");
    }

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    /// Cleanup before deletion
    void Object::CleanupsBeforeDelete()
    {
        sZoneManager->RemoveFromMap(this, true);

        m_Map = nullptr;
    }
    /// Update the object
    /// When being called, please call this function first before calling the derived class Update function
    /// @param p_Diff The time difference between the last update and the current one
    bool Object::Update(uint32 p_Diff)
    {
        if (NeedToBeUpdated())
            SetNeedToBeUpdated(false);

        return true;
    }

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

}   ///< namespace Entity
}   ///< namespace Game
}   ///< namespace Steerstone