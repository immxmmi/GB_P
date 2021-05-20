#pragma once
#include <iostream>
#include <mutex>
#include "Field.h"



class Bot
{

private:


protected:
	int x;
	int y;
	int score;
	std:: string name;
	int attack(int power);

public:
	Bot();
	~Bot();

	void setXY(int x, int y);
	void move();
	virtual void mining(Field& field) = 0;
	int rand1_4();
};

