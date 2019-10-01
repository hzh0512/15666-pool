#pragma once

#include "Mode.hpp"
#include "PoolLevel.hpp"

#include <memory>
#include "Connection.hpp"

struct ClientMode : Mode {
	ClientMode(std::string const &host, std::string const &port);
	virtual ~ClientMode();

	virtual bool handle_event(SDL_Event const &, glm::uvec2 const &window_size) override;
	virtual void update(float elapsed) override;
	virtual void draw(glm::uvec2 const &drawable_size) override;

	//helper: restart level
	void restart();

	//controls:
	PoolLevel::Dozer::Controls controls;

	//TODO: maintain a connection to the server here!
	Client *cl;
};
