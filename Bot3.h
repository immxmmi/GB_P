#pragma once
#include "Bot.h"
class Bot3 :
    public Bot
{
private:
protected:
public:
    void collect(Field& field, bool TEST, int x, int y);
    Bot3();
    ~Bot3();
    void mining(Field& field);

    friend class UnitTest;
};

