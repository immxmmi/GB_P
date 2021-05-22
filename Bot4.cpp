#include "Bot4.h"

Bot4::Bot4()
{
	this->name = "BOT4";
}

Bot4::~Bot4()
{
}

void Bot4::mining(Field& field)
{
	this->collect(field);
}
