#pragma once

#include "Player.h"
#include "Level.h"

Player::Player()
{
	speed = 500.0f;
}

Player::~Player()
{

}

void Player::handleInput(float dt)
{

	if (input->isKeyDown(sf::Keyboard::Up))
	{
		move(0, speed*dt*-1);
	}
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		move(speed*dt, 0);
	}
	if (input->isKeyDown(sf::Keyboard::Down))
	{
		move(0, speed*dt);
	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		move(speed*-1*dt, 0);
	}


	if (window->getSize().y <= getPosition().y)
	{
		setPosition(getPosition().x, window->getSize().y);
	}
	if (window->getSize().x <= getPosition().x)
	{
		setPosition(window->getSize().x, getPosition().y);
	}
	if (0 >= getPosition().y)
	{
		setPosition(0, getPosition().y);
	}
	if (0 >= getPosition().x)
	{
		setPosition(getPosition().x, 0);
	}

}