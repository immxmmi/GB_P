#pragma once
#include "Bot.h"


class Bot1 :
    public Bot
{

private:
    void sort(Field& field,bool TEST);
protected:

public:
    Bot1();
    ~Bot1();
    void mining(Field& field);
    friend class UnitTest;
};

