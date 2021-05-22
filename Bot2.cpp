#include "Bot2.h"
#include <algorithm>
#include <iostream>

Bot2::Bot2()
{
	this->name = "BOT2";
}

Bot2::~Bot2()
{
}

void Bot2::mining(Field& field)
{
	this->sort(field);
	this->collect(field);
}

void Bot2::sort(Field& field) {
	std::sort(field.mine[this->x][this->y].begin(), field.mine[this->x][this->y].end());
}
