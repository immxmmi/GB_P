#include "Bot1.h"
Bot1::Bot1(Field& field) {
    //this->setXY(this->rand1_4(),this->rand1_4());
    this->setXY(0,0);
    this->score = 0;
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


