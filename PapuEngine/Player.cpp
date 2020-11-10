#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::init(float speed, glm::vec2 position, 
	InputManager* inputManager)
{
	_speed = speed;
	_position = position;
	_inputManager = inputManager;
	_color.set(0, 0, 185, 255);
}
