#include "Bot1.h"
#include <algorithm>
#include <iostream>
Bot1::Bot1() {
    this->name = "BOT1";
}

Bot1::~Bot1() {

}

void Bot1::mining(Field& field) {
    this->sort(field);
    this->collect(field);
 }

void Bot1::sort(Field& field) {
    std::sort(field.mine[this->x][this->y].begin(), field.mine[this->x][this->y].end());
}


