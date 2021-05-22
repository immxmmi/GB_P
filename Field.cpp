#include "Field.h"
#include <iostream>

Field::Field()
{
    this->mine = vector3D(5);
    setFullField(false);
}
Field::~Field()
{
}



//UNIT CHECK 
void Field::drawField()
{
    for (unsigned int z = 0; z < 10; z++) {
        std::cout << "EBENE" << z+1 << std::endl;
        for (unsigned int y = 0; y < mine.size(); y++) {
             for (unsigned int x = 0; x < mine.size(); x++) {
                   std::cout << this->mine[x][y][z];
             }
             std::cout << std::endl;
        }
        std::cout << std::endl;
    }

}
int Field::rand1_9() {
    return rand() % 9 + 1;
}
void Field::setField(int x, int y, int z, int value)
{
    this->mine[x][y][z] = value;
}
void Field::setFullField(bool TEST)
{
    this->sum = 0;
    int value = 0;
    for (unsigned int x = 0; x < mine.size(); x++) {

        this->mine[x] = std::vector<std::vector<int>>(5);

        for (unsigned int y = 0; y < mine.size(); y++) {
            this->mine[x][y] = std::vector<int>(10);


            for (unsigned int z = 0; z < 10; z++) {
                if (TEST) {value = 1;} else {value = this->rand1_9();}
                setField(x, y, z, value);
                this->sum += value;
               // std::cout << "FIELD [" << x << "][" << y << "][" << z << "]"<< this->mine[x][y][z]<< std::endl;
            }
        }
    }
}
