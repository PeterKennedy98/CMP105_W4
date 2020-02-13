#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>

class Player : public GameObject
{

public:
	Player();
	~Player();

	GameObject playerObject;

	void handleInput(float dt);
	void shout();
	/*Imagine we created another class for weapon
	weapon w;
	*/

};

