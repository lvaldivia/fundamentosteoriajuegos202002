#pragma once
#include <glm/glm.hpp>
#include "SpriteBacth.h"
#include "GLTexture.h"
const float AGENT_WIDTH = 60.0f;
const float AGENT_RADIUS = AGENT_WIDTH / 2.0f;
class Agent
{
protected:
	glm::vec2 _position;
	float _speed;
	Color _color;
	//TO-DO MORE METHODS
public:
	Agent();
	virtual ~Agent();
	glm::vec2 getPosition()const { return _position; }
	void draw(SpriteBacth& spriteBatch);
};

