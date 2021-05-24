#include "Bot.h"
#include <mutex>
#include <chrono>

std::mutex miningX;


Bot::Bot() {
	this->setXY(this->rand1_5(), this->rand1_5());
	this->time = 000;
	this->score = 0000;
}
Bot::~Bot() {
}

void Bot::setXY(int x, int y) {
	this->x = x;
	this->y = y;
}
void Bot::collect(Field& field) {
	for (int z = 0; z < 10; z++) {
		this->score += field.mine[this->x][this->y][z];
		field.sum -= field.mine[this->x][this->y][z];
		field.mine[this->x][this->y][z] = 0;
	}
}
int Bot::getScore()
{
	return this->score;
}
long long Bot::getTime()
{
	return this->time;
}

void Bot::play(Field& field) {
	auto start = std::chrono::high_resolution_clock::now();
	while (field.sum)
	{
		miningX.lock(); this->mining(field); miningX.unlock();
		this->move();
	}
	auto stop = std::chrono::high_resolution_clock::now();
	this->time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();
}
void Bot::move() {
	this->x = this->rand1_5();
	this->y = this->rand1_5();
}

//UNIT CHECK 
int Bot::rand1_4() {
	return rand() % 4 + 1;
}
int Bot::rand1_5() {
	return rand() % 5;
}
