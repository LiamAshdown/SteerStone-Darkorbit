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

#pragma once

#include <PCH/Precompiled.hpp>
#include "Core/Core.hpp"

namespace SteerStone { namespace Core { namespace Diagnostic {

    /// Timer
    class IntervalTimer
    {
    public:
        /// Constructor
        IntervalTimer()
            : m_Current(0), m_Interval(0)
        {
        }

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

        /// Update
        /// @p_Diff : Execution Time
        void Update(uint32 const p_Diff)
        {
            m_Current += p_Diff;
        }

        /// Has Time passed
        bool Passed()
        {
            if (m_Current >= m_Interval)
            {
                m_Current = 0;
                return true;
            }

            return false;
        }

        /// Set Inverval
        /// @p_Interval : Time
        void SetInterval(uint32 const p_Interval)
        {
            m_Interval = p_Interval;
        }

        /// Reset current time back to 0
        void ResetCurrent()
        {
            m_Current = 0;
        }

        /// Get Interval
        uint32 GetInterval() const
        {
            return m_Interval;
        }
        /// Get Current
        uint32 GetCurrent() const
        {
            return m_Current;
        }

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    private:
        int32 m_Current;       ///< Diff
        int32 m_Interval;      ///< Interval
    };

}   ///< namespace Diagnostic
}   ///< namespace Core
}   ///< namespace SteerStone
