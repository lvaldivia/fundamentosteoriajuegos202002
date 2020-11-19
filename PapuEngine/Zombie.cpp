#include "Zombie.h"


Zombie::Zombie() {

}

Zombie::~Zombie() {

}

void Zombie::update() {
}

void Zombie::init(float speed, glm::vec2 position) {
	_speed = speed;
	_position = position;
	_color.set(0, 0, 0, 255);
}