#pragma once

#include "Enemy.h"
#include "Level.h"

Enemy::Enemy()
{
	speed = 200.f;
}

Enemy::~Enemy()
{

}

void Enemy::EnemyMovement(float dt)
{
	if (window->getSize.y <= getPosition().y)
	{
		speed *= -1;
	}
}



