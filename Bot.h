#pragma once
#include <iostream>
#include <mutex>
#include "Field.h"



class Bot
{

private:


protected:

public:
	Bot();
	~Bot();
	int score;

	int x;
	int y;
	std:: string name;
	int attack(int power);

	void setXY(int x, int y);
	void move();
	void collect(Field& field);
	virtual void mining(Field& field) = 0;
	int rand1_4();
};

