#pragma once
#include "Bot.h"
class Bot2 :
    public Bot
{
private:
    void reverse(Field& field, bool TEST);
    void sort(Field& field, bool TEST);
protected:
public:
    Bot2();
    ~Bot2();
    void mining(Field& field);

    friend class UnitTest;
};

