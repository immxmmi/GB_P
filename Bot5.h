#pragma once
#include "Bot.h"
class Bot5 :
    public Bot
{
private:
    void collect(Field& field, bool TEST, int x, int y);
protected:
public:
    Bot5();
    ~Bot5();
    void mining(Field& field);

    friend class UnitTest;
};

