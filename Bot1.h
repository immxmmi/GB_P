#pragma once
#include "Bot.h"
#include <algorithm>
#include <iostream>

class Bot1 :
    public Bot
{

private:

protected:

public:
    Bot1(Field& field);
    ~Bot1();
    void mining(Field& field);
    void sort(Field& field);
};

