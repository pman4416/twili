//
// Twili - Homebrew debug monitor for the Nintendo Switch
// Copyright (C) 2018 misson20000 <xenotoad@xenotoad.net>
//
// This file is part of Twili.
//
// Twili is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Twili is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Twili.  If not, see <http://www.gnu.org/licenses/>.
//

#pragma once

#define TWILI_RESULT(code) (((code) << 9) | 0xEF)

#define TWILI_ERR_INVALID_NRO TWILI_RESULT(1)
#define TWILI_ERR_NO_CRASHED_PROCESSES TWILI_RESULT(2)
#define TWILI_ERR_RESPONSE_SIZE_MISMATCH TWILI_RESULT(3)
#define TWILI_ERR_FATAL_USB_TRANSFER TWILI_RESULT(4)
#define TWILI_ERR_USB_TRANSFER TWILI_RESULT(5)
#define TWILI_ERR_UNRECOGNIZED_PID TWILI_RESULT(7)
#define TWILI_ERR_UNRECOGNIZED_HANDLE_PLACEHOLDER TWILI_RESULT(8)
#define TWILI_ERR_INVALID_SEGMENT TWILI_RESULT(9)
#define TWILI_ERR_IO_ERROR TWILI_RESULT(10)
#define TWILI_ERR_WONT_DEBUG_SELF TWILI_RESULT(11)
#define TWILI_ERR_INVALID_PIPE TWILI_RESULT(12)
#define TWILI_ERR_EOF TWILI_RESULT(13)
#define TWILI_ERR_INVALID_PIPE_STATE TWILI_RESULT(14)
#define TWILI_ERR_PIPE_ALREADY_EXISTS TWILI_RESULT(15)
#define TWILI_ERR_NO_SUCH_PIPE TWILI_RESULT(16)
#define TWILI_ERR_BAD_RESPONSE TWILI_RESULT(17)
#define TWILI_ERR_ALREADY_WAITING TWILI_RESULT(18)
#define TWILI_ERR_FATAL_BRIDGE_STATE TWILI_RESULT(19)
#define TWILI_ERR_TCP_TRANSFER TWILI_RESULT(20)
#define TWILI_ERR_APPLET_SHIM_UNKNOWN_MODE TWILI_RESULT(21)
#define TWILI_ERR_APPLET_SHIM_WRONG_MODE TWILI_RESULT(22)
#define TWILI_ERR_APPLET_SHIM_NO_COMMANDS_LEFT TWILI_RESULT(23)
#define TWILI_ERR_APPLET_TRACKER_INVALID_STATE TWILI_RESULT(24)
#define TWILI_ERR_APPLET_TRACKER_NO_PROCESS TWILI_RESULT(25)
#define TWILI_ERR_MONITORED_PROCESS_DETACHED TWILI_RESULT(26)
#define TWILI_ERR_EXTRA_MEMORY_NOT_FOUND TWILI_RESULT(27)
#define TWILI_ERR_MONITORED_PROCESS_ALREADY_ATTACHED TWILI_RESULT(28)
#define TWILI_ERR_APPLET_TRACKER_CONTORL_APPLET_LOST TWILI_RESULT(29)
#define TWILI_ERR_UNRECOGNIZED_MONITORED_PROCESS_TYPE TWILI_RESULT(30)
#define TWILI_ERR_ALREADY_HAS_CODE TWILI_RESULT(31)
#define TWILI_ERR_INTERRUPTED TWILI_RESULT(32)
	
#define TWILI_ERR_PROTOCOL_UNRECOGNIZED_OBJECT TWILI_RESULT(1001)
#define TWILI_ERR_PROTOCOL_UNRECOGNIZED_FUNCTION TWILI_RESULT(1002)
#define TWILI_ERR_PROTOCOL_TRANSFER_ERROR TWILI_RESULT(1003)
#define TWILI_ERR_PROTOCOL_UNRECOGNIZED_DEVICE TWILI_RESULT(1004)
#define TWILI_ERR_PROTOCOL_BAD_REQUEST TWILI_RESULT(1005)
#define TWILI_ERR_BAD_REQUEST TWILI_ERR_PROTOCOL_BAD_REQUEST // old alias