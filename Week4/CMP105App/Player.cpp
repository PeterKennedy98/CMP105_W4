#pragma once

#include "Player.h"
#include "Level.h"

Player::Player()
{
}

Player::~Player()
{

}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Up))
	{
		move(1, 0);
	}
	shout();


	//now go and handle weaponinputs  weapon.han

}


void Player::shout() {
	setSize(sf::Vector2f(100, 200));
	//shouting
}