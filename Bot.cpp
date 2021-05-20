#include "Bot.h"

int Bot::attack(int power)
{
	return power;
}

Bot::Bot() {
	setXY(0, 0);
}

Bot::~Bot() {

}


void Bot::setXY(int x, int y) {
	this->x = x;
	this->y = y;
}

void Bot::move() {
	this->x = (this->x + 1) % 5;
	this->y = (this->y + 1) % 5;
}

int Bot::rand1_4() {
	return rand() % 4 + 1;
}
