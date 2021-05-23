#include "Bot1.h"
#include <algorithm>
#include <iostream>
Bot1::Bot1() {
    this->name = "SORT_BOT_2000";
}

Bot1::~Bot1() {

}

void Bot1::mining(Field& field) {
    this->sort(field,false);
    this->collect(field);
 }

void Bot1::sort(Field& field, bool TEST) {
    if (TEST) {

        for (int x = 0; x < 4; x++) {
            for (int y = 0; y < 4; y++) {
                std::sort(field.mine[x][y].begin(), field.mine[x][y].end());
            }
        }
    }
    else {
        std::sort(field.mine[this->x][this->y].begin(), field.mine[this->x][this->y].end());
    }
}

