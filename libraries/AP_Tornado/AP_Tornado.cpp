// /*
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.

//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.

//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//  */

// #include <AP_Tornado/AP_Tornado.h>

// #include <AP_HAL/AP_HAL.h>
// #include <ctype.h>
// #include <stdio.h>

// #include <AP_AHRS/AP_AHRS.h>
// #include <AP_Terrain/AP_Terrain.h>
// #include <AP_Logger/AP_Logger.h>
// #include <GCS_MAVLink/GCS.h>
// #include <AP_Vehicle/AP_Vehicle_Type.h>

// void AP_Tornado::set_alt_target(const Location target) {
//     int32_t alt_above_terrain;
//     if (!target.get_alt_cm(Location::AltFrame::ABOVE_TERRAIN, alt_above_terrain)) {
//         GCS_SEND_TEXT(MAV_SEVERITY_ERROR, "Tornado Alt Set Failed");
//     }
//     alt_target = alt_above_terrain;
// }

// int8_t AP_Tornado::get_num_alt_arrows() {
//     AP_Terrain *terrain = AP::terrain();
//     float altitude_above_terrain;
//     terrain->height_above_terrain(altitude_above_terrain,true);
//     int32_t arrow_count = (alt_target - altitude_above_terrain)/cm_per_arrow;
//     return constrain_int32(arrow_count, -8,8);
// }

// // AP_AHRS *AP_AHRS::_singleton;
// // namespace AP {
// //     AP_Tornado &tornado()
// //     {
// //         return *AP_Tornado::get_singleton();
// //     }
// // }