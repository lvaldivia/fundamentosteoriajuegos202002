#include "Human.h"

Human::Human()
{
}

void Human::init(float speed, glm::vec2 position)
{
	_speed = speed;
	_position = position;
	_color.set(185, 0, 0, 255);
}

Human::~Human()
{
}
