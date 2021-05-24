#include "Bot5.h"

Bot5::Bot5()
{
	this->name = "ANGEL_BOT_2XT";

}

Bot5::~Bot5()
{
}

void Bot5::mining(Field& field)
{
	this->collect(field);
}

void Bot5::collect(Field& field) {
	// nur gerade Zahlen
	for (int z = 0; z < 10; z++) {

		if (field.mine[this->x][this->y][z] < 9) {

		if (field.sum < 2000) {
			field.sum += field.mine[this->x][this->y][z];
			field.mine[this->x][this->y][z] += field.mine[this->x][this->y][z];
		}
		else {
			this->score += field.mine[this->x][this->y][z];
			field.sum -= field.mine[this->x][this->y][z];
		}
		}else{
			this->score += field.mine[this->x][this->y][z];
			field.sum -= field.mine[this->x][this->y][z];
			field.mine[this->x][this->y][z] = 0;
		}
	
	}

}
