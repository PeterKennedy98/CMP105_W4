#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>
#include "Level.h"

class Enemy : public GameObject
{
public:
	Enemy();
	~Enemy();

	float speed;

	sf::RenderWindow* window;

	void EnemyMovement(float dt);

};