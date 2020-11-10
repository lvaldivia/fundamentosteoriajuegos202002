#pragma once
#include "Human.h"
#include "InputManager.h"
class Player : public Human
{
private:
	InputManager* _inputManager;
public:
	Player();
	~Player();
	void init(float speed, glm::vec2 position, InputManager* inputManager);
};

