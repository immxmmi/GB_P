#include "GAME.h"
#include "Bot1.h"
#include "Bot2.h"
#include "Bot3.h"
#include "Bot4.h"
#include "Bot5.h"
#include "Field.h"
#include <memory>



Bot* GAME::BOTS[5] = {};

GAME::GAME()
{
	this->BOT_COUNTER = 0;
}
GAME::~GAME()
{
}

void GAME::playGame()
{
	
}

void GAME::GAME_BOT()
{
}


void GAME::BOT_MENU() {

	std::cout << "________________________________" << std::endl << std::endl;
	std::cout << "|--------------MENU-------------|" << std::endl;
	std::cout << "________________________________" << std::endl;
	std::cout << "1.BOT1.................SORTBOT2000" << std::endl;
	std::cout << "2.BOT2.................SORTBOT3000" << std::endl;
	std::cout << "3.BOT3.................SORTBOT4000" << std::endl;
	std::cout << "4.BOT4.................SORTBOT5000" << std::endl;
	std::cout << "5.BOT5.................SORTBOT6000" << std::endl;
	std::cout << std::endl << std::endl;
	std::cout << std::endl << std::endl;
}





void GAME::choose_BOT(bool TEST)
{

	Field field;
	do{
			Bot1* bot_1 = new Bot1(field);
			Bot2* bot_2 = new Bot2();
			Bot3* bot_3 = new Bot3();
			Bot4* bot_4 = new Bot4();
			Bot5* bot_5 = new Bot5();



		if(TEST){ 
			if (this->BOT_COUNTER < 5) {
				this->BOTS[this->BOT_COUNTER] = bot_1; this->BOT_COUNTER++;
				this->choose_BOT(true);
			}
		}


		else {
			system("cls");
			this->BOT_MENU();
			switch (this->get_NUMBER_1_5())
			{
			case 1: std::cout << "Roboter 1" << std::endl; this->BOTS[this->BOT_COUNTER] = bot_1; this->BOT_COUNTER++; break;
			case 2: std::cout << "Roboter 2" << std::endl; this->BOTS[this->BOT_COUNTER] = bot_2; this->BOT_COUNTER++; break;
			case 3: std::cout << "Roboter 3" << std::endl; this->BOTS[this->BOT_COUNTER] = bot_3; this->BOT_COUNTER++; break;
			case 4: std::cout << "Roboter 4" << std::endl; this->BOTS[this->BOT_COUNTER] = bot_4; this->BOT_COUNTER++; break;
			case 5: std::cout << "Roboter 5" << std::endl; this->BOTS[this->BOT_COUNTER] = bot_5; this->BOT_COUNTER++; break;
			}
		}
	} while (this->BOT_COUNTER < 5);


	if (TEST != true) {
		system("cls");
		this->BOT_MENU();
		std::cout << "BOTS 5/" << this->BOT_COUNTER << " BOTS" << std::endl;
	}

}
//Geprüft

int GAME::get_NUMBER_1_5() {

	int input;

	std::cout << "PLEASE CHOOSE 5/" << this->BOT_COUNTER << " BOTS" << std::endl;
	do {
		std::cin >> input;
		if (std::cin.fail() || (input != 1 && input != 2 && input != 3 && input != 4 && input != 5)) {
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Invalid" << std::endl;
		}
	} while (input != 1 && input != 2 && input != 3 && input != 4 && input != 5);

	return input;
}