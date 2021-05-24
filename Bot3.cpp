#include "Bot3.h"

Bot3::Bot3()
{
	this->name = "ODDX_BOT_1000";
}

Bot3::~Bot3()
{
}

void Bot3::mining(Field& field)
{
	this->collect(field, false, 0 , 0);
}

void Bot3::collect(Field& field, bool TEST, int x, int y) {
	// nur ungerade Zahlen

	if (TEST) {
		this->x = x;
		this->y = y;
	}

	for (int z = 0; z < 10; z++) {

		if (field.mine[this->x][this->y][z] % 2 != 0) {
			this->score += field.mine[this->x][this->y][z];
			field.sum -= field.mine[this->x][this->y][z];
			field.mine[this->x][this->y][z] = 0;
		}
	}

}

