#include "Bot4.h"

Bot4::Bot4()
{
	this->name = "EVEN_BOT_1000";
}

Bot4::~Bot4()
{
}

void Bot4::mining(Field& field)
{
	this->collect(field);
}


void Bot4::collect(Field& field) {
	// nur gerade Zahlen
	for (int z = 0; z < 10; z++) {
		if (field.mine[this->x][this->y][z] % 2 == 0) {
			this->score += field.mine[this->x][this->y][z];
			field.sum -= field.mine[this->x][this->y][z];
			field.mine[this->x][this->y][z] = 0;
		}
	}

}