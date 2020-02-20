#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	playerTexture.loadFromFile("gfx/Mushroom.png");
	myPlayer.setTexture(&playerTexture);
	myPlayer.setSize(sf::Vector2f(100, 100));
	myPlayer.setPosition(100, 100);
	myPlayer.setInput(input);

	enemyTexture.loadFromFile("gfx/goomba.png");
	enemy1.setTexture(&enemyTexture);
	enemy1.setSize(sf::Vector2f(50, 50));
	enemy1.setPosition(500, 500);

}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	myPlayer.handleInput(dt);


}

// Update game objects
void Level::update(float dt)
{
	myPlayer.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(myPlayer);
	window->draw(enemy1);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}