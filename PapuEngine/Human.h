#pragma once
#include "Agent.h"
class Human : public Agent
{
protected:
	glm::vec2 _direction;

public:
	void update();
	Human();
	~Human();
	void init(float speed, glm::vec2 position);
};

