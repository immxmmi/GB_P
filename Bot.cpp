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
	this->x = (this->x + rand()) % 4 +1;
	this->y = (this->y + rand()) % 4 +1;
}

void Bot::collect(Field& field) {

	for (int z = 0; z < 10; z++) {

		if (field.mine[this->x][this->y][z] == 0) {
			this->move();
		}

		this->score += field.mine[this->x][this->y][z];
		field.sum -= field.mine[this->x][this->y][z];
		field.mine[this->x][this->y][z] = 0;

	}
}

int Bot::rand1_4() {
	return rand() % 4 + 1;
}
