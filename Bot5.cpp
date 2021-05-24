#include "Bot5.h"

Bot5::Bot5()
{
	this->name = "NORM_BOT_20XT";
}

Bot5::~Bot5()
{
}

void Bot5::mining(Field& field)
{
	this->collect(field);
}
