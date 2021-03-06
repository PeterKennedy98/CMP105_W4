#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>
#include "Level.h"

class Player : public GameObject
{

public:
	Player();
	~Player();

	float speed;

	sf::RenderWindow* window;

	void handleInput(float dt);

};

