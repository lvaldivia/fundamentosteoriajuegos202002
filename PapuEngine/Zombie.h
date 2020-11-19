#pragma once
#include "Agent.h"
class Zombie : public Agent
{
protected:
	glm::vec2 direction;
	void update();
public:
	Zombie();
	~Zombie();
	void init(float speed, glm::vec2 position);
};

