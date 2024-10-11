/*
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include <AP_Common/AP_Common.h>
#include <AP_Common/Location.h>

class AP_Tornado
{
public:
    void set_alt_target(const Location target);
    int32_t get_alt_target();
    int8_t get_num_alt_arrows();
private:
    int32_t alt_target;
    int32_t cm_per_arrow = 100;
}