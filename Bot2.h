#pragma once
#include "Bot.h"
class Bot2 :
    public Bot
{
private:
protected:
public:
    Bot2();
    ~Bot2();
    void mining(Field& field);
    void reverse(Field& field, bool TEST);
    void sort(Field& field, bool TEST);

    friend class UnitTest;
};

