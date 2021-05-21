#pragma once
#include "Bot.h"


class GAME
{
private:
protected:
public:
	int BOT_COUNTER;
	static Bot* BOTS[5];


	void playGame();
	void GAME_BOT();
	GAME();
	~GAME();
	void BOT_MENU();
	int get_NUMBER_1_5();
	void choose_BOT(bool TEST);

};

