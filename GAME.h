#pragma once
#include "Bot.h"


class GAME
{
private:
	int LIMIT;
	int BOT_COUNTER;
	static Bot* BOTS[5];
protected:
public:
	

	void playGame();
	void GAME_BOT();
	GAME();
	~GAME();
	void BOT_MENU();
	int get_NUMBER_1_5();
	void choose_BOT(bool TEST);

	friend class UnitTest;

};

