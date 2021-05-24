#pragma once
#include "Bot.h"
class Bot4 :
    public Bot
{
private:
    void collect(Field& field, bool TEST, int x, int y);
protected:
public:
    Bot4();
    ~Bot4();
    void mining(Field& field);

    friend class UnitTest;
};

