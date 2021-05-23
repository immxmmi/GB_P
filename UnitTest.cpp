#include "UnitTest.h"
#include <assert.h>
#include "Field.h"
#include "Bot1.h"
#include "Bot2.h"
#include "Bot3.h"
#include "Bot4.h"
#include "Bot5.h"
#include "GAME.h"
#include <iostream>




UnitTest::UnitTest()
{
	this->counter = 0;
}

UnitTest::~UnitTest()
{
}

void UnitTest::TEST_UNITTEST() {

	std::cout << "TEST_UNITTEST :  " << std::endl;
	// TEST ZufallsZahlen
	std::cout << std::endl << "TEST RANDOM NUMBER 1-3:" << std::endl;
	assert(this->rand1_3() > 0 && "random Zahl ist kleiner als 1");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(this->rand1_3() < 4 && "random Zahl ist größer als 3");
	std::cout << "--> true" << std::endl;
	this->counter++;

	std::cout << std::endl << "TEST RANDOM NUMBER 1-4:" << std::endl;
	assert(this->rand1_4() > 0 && "random Zahl ist kleiner als 1");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(this->rand1_4() < 5 && "random Zahl ist größer als 4");
	std::cout << "--> true" << std::endl;
	this->counter++;

	std::cout << std::endl << "TEST RANDOM NUMBER 1-5:" << std::endl;
	assert(this->rand1_5() > 0 && "random Zahl ist kleiner als 1");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(this->rand1_5() < 6 && "random Zahl ist größer als 5");
	std::cout << "--> true" << std::endl;
	this->counter++;


	std::cout << std::endl << "TEST RANDOM NUMBER 1-9:" << std::endl;
	assert(this->rand1_9() > 0 && "random Zahl ist kleiner als 1");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(this->rand1_9() < 10 && "random Zahl ist größer als 9");
	std::cout << "--> true" << std::endl;
	this->counter++;

	std::cout << std::endl << "TEST RANDOM NUMBER 1-10:" << std::endl;
	assert(this->rand1_10() > 0 && "random Zahl ist kleiner als 1");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(this->rand1_10() < 11 && "random Zahl ist größer als 10");
	std::cout << "--> true" << std::endl;
	this->counter++;

	std::cout << std::endl << "TEST RANDOM NUMBER 1-15:" << std::endl;
	assert(this->rand1_15() > 0 && "random Zahl ist kleiner als 1");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(this->rand1_15() < 16 && "random Zahl ist größer als 15");
	std::cout << "--> true" << std::endl;
	this->counter++;

	std::cout << std::endl << "TEST:" << this->counter << "   UNIT TEST CHECK SUCCESS 0 ERROR" << std::endl;
	std::cout << "_________________________________________________________________" << std::endl << std::endl << std::endl;
	this->counter = 0;
}
void UnitTest::TEST_FIELD(){
	
	std::cout << "TEST_FIELD :  " << std::endl;
	std::cout << ".....create TEST FIELD" << std::endl;
	Field* testField = new Field();


	//SET RANDOM FELD + VALUE 
	std::cout << std::endl << "TEST SET RANDOM FIELD --> VALUE:  " << std::endl;
	int x = this->rand1_4();
	int y = this->rand1_4();
	int z = this->rand1_9();
	int value = this->rand1_9();
	testField->setField(x, y, z, value);
	assert(testField->mine[x][y][z] == value && "TEST setFIELD"); 
	std::cout << "Feld ["<<x<<"]["<<y<<"]["<<z<<"]="<< value << "--> true" << std::endl;
	this->counter++;



	// MIN TEST
	std::cout << std::endl << "MIN: " << std::endl;
	std::cout << "TEST FIELD VALUE:  "<< std::endl;
	assert(testField->mine[0][0][0] >= 0 && "Vector TEST Feld 0/0/0");
	std::cout << "Feld [0][0][0] " << "--> true" << std::endl;
	this->counter++;
	assert(testField->mine[0][0][0] < 10 && "Vector TEST Feld 0/0/0");
	std::cout << "Feld [0][0][0] " << "--> true" << std::endl;
	this->counter++;



	//RANDOM TEST
	std::cout << std::endl << "RANDOM: " << std::endl;

	for (int i = 0; i < 6; i++) {
		assert(testField->mine[this->rand1_4()][this->rand1_4()][this->rand1_9()] >= 0 && "Vector TEST Feld X/Y/Z");
		std::cout << "Feld [X][Y][Z] " << "--> true" << std::endl;
		this->counter++;
		assert(testField->mine[this->rand1_4()][this->rand1_4()][this->rand1_9()] < 10 && "Vector TEST Feld X/Y/Z");
		std::cout << "Feld [X][Y][Z] " << "--> true" << std::endl;
		this->counter++;
	}



	// MAX TEST
	std::cout<< std::endl << "MAX: "<< std::endl;
	assert(testField->mine[4][0][0] >= 0 && "Vector TEST Feld 4/0/0");
	std::cout << "Feld [4][0][0] " << "--> true" << std::endl;
	this->counter++;
	assert(testField->mine[4][0][0] < 10 && "Vector TEST Feld 4/0/0");
	std::cout << "Feld [4][0][0] " << "--> true" << std::endl;
	this->counter++;

	assert(testField->mine[0][4][0] >= 0 && "Vector TEST Feld 0/4/0");
	std::cout << "Feld [0][4][0] " << "--> true" << std::endl;
	this->counter++;
	assert(testField->mine[0][4][0] < 10 && "Vector TEST Feld 0/4/0");
	std::cout << "Feld [0][4][0] " << "--> true" << std::endl;
	this->counter++;

	assert(testField->mine[0][0][9] >= 0 && "Vector TEST Feld 0/0/9");
	std::cout << "Feld [0][0][9] " << "--> true" << std::endl;
	this->counter++;
	assert(testField->mine[0][0][9] < 10 && "Vector TEST Feld 0/0/9");
	std::cout << "Feld [0][0][9] " << "--> true" << std::endl;
	this->counter++;


	// TEST ZufallsZahlen
	std::cout<< std::endl << "TEST RANDOM NUMBER 1-9:" << std::endl;


	for (int i = 0; i < 3; i++) {
		assert(testField->rand1_9() < 10 && "random Zahl ist größer als 9");
		std::cout << "--> true" << std::endl;
		this->counter++;
		assert(testField->rand1_9() >= 0 && "random Zahl ist kleiner als 0");
		std::cout << "--> true" << std::endl;
		this->counter++;
	}

	//SUM TEST
	std::cout << "SUM -- SCORE TEST" <<std::endl;
	testField->setFullField(true);
	assert(testField->sum == 250 && "SUMME ist nicht KORREKT");
	std::cout << "--> true" << std::endl;
	this->counter++;

	for (int i = 0; i < 3; i++) {
		testField->setFullField(false);
		assert(testField->sum < 2251 && "SUMME ist größer als das MAXIMUM");
		std::cout << "--> true" << std::endl;
		this->counter++;
		assert(testField->sum >= 0 && "SUMME ist kleiner als NULL");
		std::cout << "--> true" << std::endl;
		this->counter++;
	}

	// DELETE
	std::cout << std::endl << "DELETE OBJEKTS" << std::endl;
	testField->~Field();
	delete(testField);
	std::cout << std::endl << "TEST:" << this->counter << "   FIELD CHECK SUCCESS 0 ERROR" << std::endl;
	std::cout << "_________________________________________________________________" << std::endl << std::endl << std::endl;
	this->counter = 0;
}
void UnitTest::TEST_BOT()
{
	//BOT
	std::cout << "TEST_BOT :  " << std::endl;
	std::cout << ".....create TEST Field" << std::endl;
	Field testField;


	std::cout << ".....create TEST BOT1" << std::endl;
	Bot1* testBot1 = new Bot1();
	//NAV == TRUE
	std::cout << "STATUS CHECK BOT 1" << std::endl;
	assert(testBot1->name != "" && "RAND NUMBER 5 lower < 5");
	std::cout << "--> true" << std::endl;
	this->counter++;

	std::cout << "TEST XY" << std::endl;
	assert(testBot1->x > 0 && "START X --> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;

	assert(testBot1->x < 5 && "START X --> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;


	assert(testBot1->y > 0 && "START Y--> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;	
	assert(testBot1->y < 5 && "START Y--> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;




	std::cout << "MOVE && SET BOT1 "<< std::endl;
	testBot1->setXY(1,2);
	assert(testBot1->x == 1 && "TEST : X = 1");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(testBot1->y == 2 && "TEST : Y = 2");
	std::cout << "--> true" << std::endl;
	this->counter++;




	//RANDOM NUMBER CHECK
	std::cout << "RANDOM NUMBER CHECK" << std::endl;
	assert(testBot1->rand1_5() >= 0 && "RAND NUMBER 5 higher >= 0");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(testBot1->rand1_5() < 5 && "RAND NUMBER 5 lower < 5");
	std::cout << "--> true" << std::endl;
	this->counter++;

	assert(testBot1->rand1_4() > 0 && "RAND NUMBER 4 higher >= 0");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(testBot1->rand1_4() < 5 && "RAND NUMBER 5 lower < 5");
	std::cout << "--> true" << std::endl;
	this->counter++;



	std::cout << ".....create TEST BOT2" << std::endl;
	Bot2* testBot2 = new Bot2();
	std::cout << "STATUS CHECK BOT 2" << std::endl;
	assert(testBot2->name != "" && "RAND NUMBER 5 lower < 5");
	std::cout << "--> true" << std::endl;
	this->counter++;

	std::cout << "TEST XY" << std::endl;
	assert(testBot2->x >= 0 && "START X --> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;

	assert(testBot2->x < 5 && "START X --> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;

	assert(testBot2->y >= 0 && "START Y--> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(testBot2->y < 5 && "START Y--> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;

	std::cout << "MOVE && SET BOT2 " << std::endl;
	testBot2->setXY(1, 2);
	assert(testBot2->x == 1 && "TEST : X = 1");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(testBot2->y == 2 && "TEST : Y = 2");
	std::cout << "--> true" << std::endl;
	this->counter++;



	std::cout << ".....create TEST BOT3" << std::endl;
	Bot3* testBot3 = new Bot3();
	std::cout << "STATUS CHECK BOT 3" << std::endl;
	assert(testBot3->name != "" && "RAND NUMBER 5 lower < 5");
	std::cout << "--> true" << std::endl;
	this->counter++;

	std::cout << "TEST XY" << std::endl;
	assert(testBot3->x >= 0 && "START X --> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;

	assert(testBot3->x < 5 && "START X --> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;


	assert(testBot3->y >= 0 && "START Y--> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(testBot3->y < 5 && "START Y--> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;

	std::cout << "MOVE && SET BOT3 " << std::endl;
	testBot3->setXY(1, 2);
	assert(testBot3->x == 1 && "TEST : X = 1");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(testBot3->y == 2 && "TEST : Y = 2");
	std::cout << "--> true" << std::endl;
	this->counter++;


	std::cout << ".....create TEST BOT4" << std::endl;
	Bot4* testBot4 = new Bot4();
	std::cout << "STATUS CHECK BOT 4" << std::endl;
	assert(testBot4->name != "" && "RAND NUMBER 5 lower < 5");
	std::cout << "--> true" << std::endl;
	this->counter++;

	std::cout << "TEST XY" << std::endl;
	assert(testBot4->x >= 0 && "START X --> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;

	assert(testBot4->x < 5 && "START X --> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;


	assert(testBot4->y >= 0 && "START Y--> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(testBot4->y < 5 && "START Y--> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;

	std::cout << "MOVE && SET BOT4 " << std::endl;
	testBot4->setXY(1, 2);
	assert(testBot4->x == 1 && "TEST : X = 1");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(testBot4->y == 2 && "TEST : Y = 2");
	std::cout << "--> true" << std::endl;
	this->counter++;


	std::cout << ".....create TEST BOT5" << std::endl;
	Bot5* testBot5 = new Bot5();
	std::cout << "STATUS CHECK BOT 5" << std::endl;
	assert(testBot5->name != "" && "RAND NUMBER 5 lower < 5");
	std::cout << "--> true" << std::endl;
	this->counter++;

	std::cout << "TEST XY" << std::endl;
	assert(testBot5->x >= 0 && "START X --> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;

	assert(testBot5->x < 5 && "START X --> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;


	assert(testBot5->y >= 0 && "START Y--> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(testBot5->y < 5 && "START Y--> VALUE");
	std::cout << "--> true" << std::endl;
	this->counter++;

	std::cout << "MOVE && SET BOT5 " << std::endl;
	testBot5->setXY(1, 2);
	assert(testBot5->x == 1 && "TEST : X = 1");
	std::cout << "--> true" << std::endl;
	this->counter++;
	assert(testBot5->y == 2 && "TEST : Y = 2");
	std::cout << "--> true" << std::endl;
	this->counter++;


	// DELETE
	std::cout << std::endl << "DELETE OBJEKTS" << std::endl;
	testField.~Field();
	testBot1->~Bot1();
	testBot2->~Bot2();
	testBot3->~Bot3();
	testBot4->~Bot4();
	testBot5->~Bot5();
	delete(testBot1);
	delete(testBot2);
	delete(testBot3);
	delete(testBot4);
	delete(testBot5);
	std::cout << std::endl << "TEST:" << this->counter << "   BOT CHECK SUCCESS 0 ERROR" << std::endl;
	std::cout << "_________________________________________________________________"<< std::endl << std::endl << std::endl;
	this->counter = 0;
}
void UnitTest::TEST_GAME()
{
	//GAME
	std::cout << "TEST_GAME :  " << std::endl;
	std::cout << ".....create TEST GAME" << std::endl;
	GAME* testGAME = new GAME();
	
	//BOT 
	std::cout << std::endl << "CHECK BOTS POINTER" << std::endl;
	assert(testGAME->BOT_COUNTER == 0 && "BOTS --> not EMPTY");
	std::cout << "--> true" << std::endl;
	this->counter++;
	std::cout << std::endl << "CREATE 5 BOTS" << std::endl;
	testGAME->choose_BOT(true);
	for (int i = 0; i < 5; i++) {

		assert(testGAME->BOTS[i] != nullptr && "BOTS --> CREATE");
		std::cout << "--> true" << std::endl;
		this->counter++;
	}
	std::cout << std::endl << "CREATE 5 BOTS SUCCESSFUL" << std::endl;

	// DELETE
	std::cout << std::endl << "DELETE OBJEKTS" << std::endl;
	testGAME->~GAME();
	delete(testGAME);
	std::cout << std::endl << "TEST:"<<this->counter<<"   BOT CHECK SUCCESS 0 ERROR" << std::endl;
	std::cout << "_________________________________________________________________" << std::endl << std::endl << std::endl;

	this->counter = 0;
}

void UnitTest::TEST()
{
	this->TEST_UNITTEST();
	this->TEST_BOT();
	this->TEST_FIELD();
	this->TEST_GAME();
}


//RANDOM TEST NUMBERS
int UnitTest::rand1_3() {
	return rand() % 3 + 1;
}
int UnitTest::rand1_4() {
	return rand() % 4 + 1;
}
int UnitTest::rand1_5() {
	return rand() % 5 + 1;
}
int UnitTest::rand1_9() {
	return rand() % 9 + 1;
}
int UnitTest::rand1_10() {
	return rand() % 10 + 1;
}
int UnitTest::rand1_15() {
	return rand() % 15 + 1;
}


