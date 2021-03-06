//
// Twili - Homebrew debug monitor for the Nintendo Switch
// Copyright (C) 2019 misson20000 <xenotoad@xenotoad.net>
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

#include<libtransistor/cpp/nx.hpp>

#include<memory>
#include<optional>
#include<deque>

#include "TrackedProcess.hpp"

namespace twili {
namespace process {

class AppletTracker;

class AppletProcess : public TrackedProcess<AppletProcess> {
 public:
	AppletProcess(AppletTracker &tracker);

	virtual void ChangeState(State state) override;
	virtual void AddHBABIEntries(std::vector<loader_config_entry_t> &entries) override;

	// used to communicate with host shim
	trn::KEvent &GetCommandEvent();
	std::optional<uint32_t> PopCommand();
	
 protected:
	virtual void KillImpl() override;
	
 private:
	std::shared_ptr<trn::WaitHandle> kill_timeout;

	void PushCommand(uint32_t command);
	trn::KEvent command_event;
	trn::KWEvent command_wevent;
	std::deque<uint32_t> commands;
};

} // namespace process
} // namespace twili
