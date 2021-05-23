#pragma once
#include <iostream>
#include <mutex>
#include "Field.h"



class Bot
{

private:
	long long time;
protected:
	void setXY(int x, int y);
	int rand1_4();
	int rand1_5();
	void move();
	int x;
	int y;

public:
	Bot();
	~Bot();

	int score;
	std:: string name;
	int getScore();
	long long getTime();
	void play(Field& field);

	virtual void mining(Field& field) = 0;
    void collect(Field& field);
	friend class UnitTest;
};

