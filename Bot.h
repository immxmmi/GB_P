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
	long long time;

	int x;
	int y;
	std:: string name;
	int attack(int power);

	void setXY(int x, int y);
	void move();
	virtual void mining(Field& field) = 0;
	void play(Field& field);
	virtual void collect(Field& field);
	int rand1_4();
	int rand1_5();

	friend class UnitTest;
};

