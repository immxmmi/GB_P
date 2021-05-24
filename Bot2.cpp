#include "Bot2.h"
#include <algorithm>
#include <iostream>

Bot2::Bot2()
{
	this->name = "REVERS_BOT_20";
}

Bot2::~Bot2()
{
}

void Bot2::mining(Field& field)
{
    this->sort(field, false);
	this->reverse(field,false);
	this->collect(field);
}

void Bot2::reverse(Field& field,bool TEST) {
    if (TEST) {
        if (TEST) {
            for (int x = 0; x < 5; x++) {
                for (int y = 0; y < 5; y++) {
                    std::reverse(field.mine[x][y].begin(), field.mine[x][y].end());
                }
            }
        }
    }
    else {
        std::reverse(field.mine[this->x][this->y].begin(), field.mine[this->x][this->y].end());
    }
}

void Bot2::sort(Field& field, bool TEST) {
    if (TEST) {

        if (TEST) {

            for (int x = 0; x < 5; x++) {
                for (int y = 0; y < 5; y++) {
                    std::sort(field.mine[x][y].begin(), field.mine[x][y].end());
                }
            }
        }
    }
    else {
        std::sort(field.mine[this->x][this->y].begin(), field.mine[this->x][this->y].end());
    }
}
