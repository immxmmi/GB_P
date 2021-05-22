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



Bot* GAME::BOTS[5] = {};

GAME::GAME()
{
	this->BOT_COUNTER = 0;
	this->LIMIT = 0;
}

GAME::~GAME()
{
}
void GAME::playGame()
{
	Field field;

	this->choose_BOT(false);

	this->LIMIT = field.sum;
	std::cout << this->LIMIT<<std::endl;
	field.drawField();

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
		
		
		
		field.drawField();
		std::cout<<"ENDE::" <<field.sum<<std::endl;
		std::cout<< std::endl<< std::endl<< std::endl;
		std::cout<<"NAME::" << BOTS[0]->name <<std::endl;
		std::cout<<"TIME0::" << BOTS[0]->time <<std::endl;
		std::cout<<"SCORE0::" << BOTS[0]->score <<std::endl;

		std::cout << std::endl << std::endl << std::endl;
		std::cout << "NAME::" << BOTS[1]->name << std::endl;
		std::cout<<"TIME1::" << BOTS[1]->time <<std::endl;
		std::cout << "SCORE1::" << BOTS[1]->score << std::endl;

		std::cout << std::endl << std::endl << std::endl;
		std::cout << "NAME::" << BOTS[2]->name << std::endl;
		std::cout<<"TIME2::" << BOTS[2]->time <<std::endl;
		std::cout << "SCORE2::" << BOTS[2]->score << std::endl;

		std::cout << std::endl << std::endl << std::endl;
		std::cout << "NAME::" << BOTS[3]->name << std::endl;
		std::cout<<"TIME3::" << BOTS[3]->time <<std::endl;
		std::cout << "SCORE3::" << BOTS[3]->score << std::endl;

		std::cout << std::endl << std::endl << std::endl;
		std::cout << "NAME::" << BOTS[4]->name << std::endl;
		std::cout<<"TIME4::" << BOTS[4]->time <<std::endl;
		std::cout << "SCORE4::" << BOTS[4]->score << std::endl;
	

}
void GAME::GAME_BOT()
{
}




//UNIT CHECK 
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
				case 1: {std::cout << "Roboter 1" << std::endl; Bot* bot_1 = new Bot1(); this->BOTS[this->BOT_COUNTER] = bot_1; this->BOT_COUNTER++; break;}
				case 2: {std::cout << "Roboter 2" << std::endl; Bot* bot_2 = new Bot2(); this->BOTS[this->BOT_COUNTER] = bot_2; this->BOT_COUNTER++; break;}
				case 3: {std::cout << "Roboter 3" << std::endl; Bot* bot_3 = new Bot3(); this->BOTS[this->BOT_COUNTER] = bot_3; this->BOT_COUNTER++; break;}
				case 4: {std::cout << "Roboter 4" << std::endl; Bot* bot_4 = new Bot4(); this->BOTS[this->BOT_COUNTER] = bot_4; this->BOT_COUNTER++; break;}
				case 5: {std::cout << "Roboter 5" << std::endl; Bot* bot_5 = new Bot5(); this->BOTS[this->BOT_COUNTER] = bot_5; this->BOT_COUNTER++; break;}
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
			std::cout << "Invalid" << std::endl;
		}
	} while (input != 1 && input != 2 && input != 3 && input != 4 && input != 5);

	return input;
}