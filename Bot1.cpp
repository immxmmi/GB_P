#include "Bot1.h"
Bot1::Bot1(Field& field) {
    this->setXY(this->rand1_4(),this->rand1_4());
    this->score = 0;
    this->x = rand1_4();
    this->y = rand1_4();
}

Bot1::~Bot1() {

}

void Bot1::mining(Field& field) {
    sort(field);

    for (int z = 0; z < 10; z++) {

        if (field.mine[this->x][this->y][z] == 0) {
            this->move();
        }
            this->score += field.mine[this->x][this->y][z];
            field.sum -= field.mine[this->x][this->y][z];
            field.mine[this->x][this->y][z] = 0;
    }
 }

void Bot1::sort(Field& field) {
    std::sort(field.mine[this->x][this->y].begin(), field.mine[this->x][this->y].end());
}


