#include "GAME.h"
#include "Bot1.h"
#include "Bot2.h"
#include "Bot3.h"
#include "Bot4.h"
#include "Bot5.h"
#include "Field.h"
#include <memory>
#include <thread>
#include <mutex>
#include <stdexcept>



Bot* GAME::BOTS[5] = {};

GAME::GAME()
{
	this->BOT_COUNTER = 0;
	this->LIMIT = 0;
}

GAME::~GAME()
{
}

void GAME::gameScore() {

}

void GAME::playGame()
{
	Field field;
	this->choose_BOT(false);
	this->LIMIT = field.sum;
	std::cout << this->LIMIT<<std::endl;
	field.drawField(false);

		std::thread Core1(&Bot::play, BOTS[0], std::ref(field));
		std::thread Core2(&Bot::play,BOTS[1],std::ref(field));
		std::thread Core3(&Bot::play,BOTS[2],std::ref(field));
		std::thread Core4(&Bot::play,BOTS[3],std::ref(field));
		std::thread Core5(&Bot::play,BOTS[4],std::ref(field));

		Core1.join();
		Core2.join();
		Core3.join();
		Core4.join();
		Core5.join();
		
		field.drawField(true);
		std::cout<< std::endl<< std::endl<< std::endl;
		std::cout<<"ENDE::" <<field.sum<<std::endl;
		std::cout<< std::endl<< std::endl<< std::endl;

		for (int i = 0; i < 5; i++) {
			std::cout <<  std::endl << std::endl;
			std::cout << "##########################################" << std::endl;
			std::cout << "##   NAME:   " << BOTS[i]->name << std::endl;
			std::cout << "##########################################" << std::endl;
			std::cout << "##   TIME:     " << BOTS[i]->getTime() << std::endl;
			std::cout << "##   SCORE:    " << BOTS[i]->getScore() << std::endl;
			std::cout << "##########################################" << std::endl;
		}
}
void GAME::GAME_BOT()
{
}


//UNIT CHECK 
void GAME::BOT_MENU() {

	Bot* bot_name1 = new Bot1();
	Bot* bot_name2 = new Bot2();
	Bot* bot_name3 = new Bot3();
	Bot* bot_name4 = new Bot4();
	Bot* bot_name5 = new Bot5();

	std::cout << "        ###########################################" << std::endl;
	std::cout << "        ##                BOT-MENU               ##" << std::endl;
	std::cout << "        ###########################################" << std::endl;
	std::cout << "        ##"<< std::endl;
	std::cout << "        ##  1 ................." << bot_name1->name<< std::endl;
	std::cout << "        ##  2 ................." << bot_name2->name << std::endl;
	std::cout << "        ##  3 ................." << bot_name3->name << std::endl;
	std::cout << "        ##  4 ................." << bot_name4->name << std::endl;
	std::cout << "        ##  5 ................." << bot_name5->name << std::endl;
	std::cout << "        ##"<< std::endl;
	std::cout << "        ###########################################" << std::endl;
	std::cout << "        ###########################################" << std::endl << std::endl;
	std::cout << std::endl << std::endl;
	std::cout << std::endl << std::endl;

	delete(bot_name1);
	delete(bot_name2);
	delete(bot_name3);
	delete(bot_name4);
	delete(bot_name5);
}
void GAME::choose_BOT(bool TEST)
{
	do{

		if(TEST){ 
			if (this->BOT_COUNTER < 5) {
				Bot1* bot_1 = new Bot1();
				this->BOTS[this->BOT_COUNTER] = bot_1; this->BOT_COUNTER++;
				this->choose_BOT(true);
			}
		}


		else {
			system("cls");
			this->BOT_MENU();
			switch (this->get_NUMBER_1_5())
			{
				case 1: {Bot* bot_1 = new Bot1(); std::cout << bot_1->name << std::endl; this->BOTS[this->BOT_COUNTER] = bot_1; this->BOT_COUNTER++; break;}
				case 2: {Bot* bot_2 = new Bot2(); std::cout << bot_2->name << std::endl;  this->BOTS[this->BOT_COUNTER] = bot_2; this->BOT_COUNTER++; break;}
				case 3: {Bot* bot_3 = new Bot3(); std::cout << bot_3->name << std::endl;  this->BOTS[this->BOT_COUNTER] = bot_3; this->BOT_COUNTER++; break;}
				case 4: {Bot* bot_4 = new Bot4(); std::cout << bot_4->name << std::endl;  this->BOTS[this->BOT_COUNTER] = bot_4; this->BOT_COUNTER++; break;}
				case 5: {Bot* bot_5 = new Bot5(); std::cout << bot_5->name << std::endl;  this->BOTS[this->BOT_COUNTER] = bot_5; this->BOT_COUNTER++; break;}
			}
		}
	} while (this->BOT_COUNTER < 5);


	if (TEST != true) {
		system("cls");
		this->BOT_MENU();
		std::cout << "BOTS 5/" << this->BOT_COUNTER << " BOTS" << std::endl;
	}

}
int GAME::get_NUMBER_1_5() {
	int input;
	std::cout << "PLEASE CHOOSE 5/" << this->BOT_COUNTER << " BOTS" << std::endl;
	do {
		std::cin >> input;
		if (std::cin.fail() || (input != 1 && input != 2 && input != 3 && input != 4 && input != 5)) {
			std::cin.clear();
			std::cin.ignore();
			//throw std::invalid_argument("Input failed");
			std::cout << "Invalid" << std::endl;
		}
	} while (input != 1 && input != 2 && input != 3 && input != 4 && input != 5);




	return input;
}