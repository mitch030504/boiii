#pragma once

#include <game/game.hpp>
#include <utils/info_string.hpp>

namespace party
{
	using query_callback_func = void(bool success, const game::netadr_t& host, const ::utils::info_string& info);
	using query_callback = std::function<query_callback_func>;

	void query_server(const game::netadr_t& host, query_callback callback);
}
