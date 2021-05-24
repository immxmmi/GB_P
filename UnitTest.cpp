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
#include <algorithm> 




UnitTest::UnitTest()
{
	this->counter = 0;
	this->hardness = 0;
}

UnitTest::~UnitTest()
{
}

void UnitTest::TEST_UNITTEST(bool SHOW) {

	if (SHOW) {
		std::cout << "TEST_UNITTEST :  " << std::endl;
		// TEST ZufallsZahlen
		std::cout << std::endl << "TEST RANDOM NUMBER 1-3:" << std::endl;
	}
	for (int i = 0; i <= this->hardness; i++) {
		assert(this->rand1_3() > 0 && "random Zahl ist kleiner als 1");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
		assert(this->rand1_3() < 4 && "random Zahl ist größer als 3");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
	}
	if (SHOW) {
		std::cout << std::endl << "TEST RANDOM NUMBER 1-4:" << std::endl;
	}
	for (int i = 0; i <= this->hardness; i++) {
		assert(this->rand1_4() > 0 && "random Zahl ist kleiner als 1");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
		assert(this->rand1_4() < 5 && "random Zahl ist größer als 4");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
	}
	if (SHOW) {
		std::cout << std::endl << "TEST RANDOM NUMBER 1-5:" << std::endl;
	}
	for (int i = 0; i <= this->hardness; i++) {
		assert(this->rand1_5() > 0 && "random Zahl ist kleiner als 1");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
		assert(this->rand1_5() < 6 && "random Zahl ist größer als 5");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
	}

	if (SHOW) {
		std::cout << std::endl << "TEST RANDOM NUMBER 1-9:" << std::endl;
	}
	for (int i = 0; i <= this->hardness; i++) {
		assert(this->rand1_9() > 0 && "random Zahl ist kleiner als 1");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
		assert(this->rand1_9() < 10 && "random Zahl ist größer als 9");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
	}

	if (SHOW) {
		std::cout << std::endl << "TEST RANDOM NUMBER 1-10:" << std::endl;
	}
	for (int i = 0; i <= this->hardness; i++) {
		assert(this->rand1_10() > 0 && "random Zahl ist kleiner als 1");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
		assert(this->rand1_10() < 11 && "random Zahl ist größer als 10");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
	}

	if (SHOW) {
		std::cout << std::endl << "TEST RANDOM NUMBER 1-15:" << std::endl;
	}
	for (int i = 0; i <= this->hardness; i++) {
		assert(this->rand1_15() > 0 && "random Zahl ist kleiner als 1");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
		assert(this->rand1_15() < 16 && "random Zahl ist größer als 15");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
	}
	if (SHOW) {
		std::cout << std::endl << "TEST:" << this->counter << "   UNIT TEST CHECK SUCCESS 0 ERROR" << std::endl;
		std::cout << "_________________________________________________________________" << std::endl << std::endl << std::endl;
	}
	this->counter = 0;
}
void UnitTest::TEST_FIELD(bool SHOW){
	if (SHOW) {
		std::cout << "TEST_FIELD :  " << std::endl;
		std::cout << ".....create TEST FIELD" << std::endl;
	}

	Field* testField = new Field();
	if (SHOW) {
		testField->drawField(true);
	}

	//SET RANDOM FELD + VALUE 
	if (SHOW) {
		std::cout << std::endl << "TEST SET RANDOM FIELD --> VALUE:  " << std::endl;
	}


	for (int i = 0; i <= this->hardness; i++) {
		int x = this->rand1_4();
		int y = this->rand1_4();
		int z = this->rand1_9();
		int value = this->rand1_9();
		testField->setField(x, y, z, value);
		if (SHOW) {
			testField->drawField(true);
		}


		if (SHOW) {
			std::cout << "Feld [" << x << "][" << y << "][" << z+1 << "]=" << value << "--> true" << std::endl;
		}
		this->counter++;
	}


	// MIN TEST
	if (SHOW) {
		std::cout << std::endl << "MIN: " << std::endl;
		std::cout << "TEST FIELD VALUE:  " << std::endl;
	}
	assert(testField->mine[0][0][0] >= 0 && "Vector TEST Feld 0/0/0");
	if (SHOW) {
		std::cout << "Feld [0][0][0] " << "--> true" << std::endl;
	}
	this->counter++;
	assert(testField->mine[0][0][0] < 10 && "Vector TEST Feld 0/0/0");
	if (SHOW) {
		std::cout << "Feld [0][0][0] " << "--> true" << std::endl;
	}
	this->counter++;



	//RANDOM TEST
	if (SHOW) {
		std::cout << std::endl << "RANDOM: " << std::endl;
	}
		testField->setFullField(false);
	if (SHOW) {
		testField->drawField(true);
	}
	for (int i = 0; i < 6 + hardness; i++) {

		int x = this->rand1_4();
		int y = this->rand1_4();
		int z = this->rand1_9();


		assert(testField->mine[x][y][z] >= 0 && "Vector TEST Feld X/Y/Z");
		if (SHOW) {
			std::cout << "Feld ["<< x <<"]["<< y <<"]["<< z+1 <<"] = " << testField->mine[x][y][z] << "--> true" << std::endl;
		}
		this->counter++;
		if (SHOW) {
			assert(testField->mine[x][y][z] < 10 && "Vector TEST Feld X/Y/Z");
			std::cout << "Feld [" << x << "][" << y << "][" << z+1 << "] = " << testField->mine[x][y][z] << "--> true" << std::endl;

		}
		this->counter++;
	}



	// MAX TEST

	if (SHOW) {
		std::cout << std::endl << "MAX: " << std::endl;
	}
	assert(testField->mine[4][0][0] >= 0 && "Vector TEST Feld 4/0/0");
	if (SHOW) {
		std::cout << "Feld [4][0][0] " << "--> true" << std::endl;
	}
	this->counter++;
	assert(testField->mine[4][0][0] < 10 && "Vector TEST Feld 4/0/0");
	if (SHOW) {
		std::cout << "Feld [4][0][0] " << "--> true" << std::endl;
	}
	this->counter++;

	assert(testField->mine[0][4][0] >= 0 && "Vector TEST Feld 0/4/0");
	if (SHOW) {
		std::cout << "Feld [0][4][0] " << "--> true" << std::endl;
	}
	this->counter++;
	assert(testField->mine[0][4][0] < 10 && "Vector TEST Feld 0/4/0");
	if (SHOW) {
		std::cout << "Feld [0][4][0] " << "--> true" << std::endl;
	}
	this->counter++;

	assert(testField->mine[0][0][9] >= 0 && "Vector TEST Feld 0/0/9");
	if (SHOW) {
		std::cout << "Feld [0][0][9] " << "--> true" << std::endl;
	}
	this->counter++;
	assert(testField->mine[0][0][9] < 10 && "Vector TEST Feld 0/0/9");
	if (SHOW) {
		std::cout << "Feld [0][0][9] " << "--> true" << std::endl;
	}
	this->counter++;


	// TEST ZufallsZahlen
	if (SHOW) {
		std::cout << std::endl << "TEST RANDOM NUMBER 1-9:" << std::endl;
	}

	for (int i = 0; i < 3 + this->hardness; i++) {
		assert(testField->rand1_9() < 10 && "random Zahl ist größer als 9");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
		assert(testField->rand1_9() >= 0 && "random Zahl ist kleiner als 0");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
	}

	//SUM TEST
	if (SHOW) {
		std::cout << "SUM -- SCORE TEST" << std::endl;
	}
	testField->setFullField(true);
	if (SHOW) {
	testField->drawField(true);
	}
	assert(testField->sum == 250 && "SUMME ist nicht KORREKT");
	if (SHOW) { std::cout << "250 --> true" << std::endl; }
	this->counter++;

	for (int i = 0; i < 3 + hardness; i++) {
		testField->setFullField(false);
	if (SHOW) {
		testField->drawField(true);
	}
		assert(testField->sum < 2251 && "SUMME ist größer als das MAXIMUM");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
		assert(testField->sum >= 0 && "SUMME ist kleiner als NULL");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
	}

	// DELETE
	if (SHOW) {
		std::cout << std::endl << "DELETE OBJEKTS" << std::endl;
	}
	testField->~Field();
	delete(testField);
	if (SHOW) {
		std::cout << std::endl << "TEST:" << this->counter << "   FIELD CHECK SUCCESS 0 ERROR" << std::endl;
		std::cout << "_________________________________________________________________" << std::endl << std::endl << std::endl;
	}
	this->counter = 0;
}
void UnitTest::TEST_BOT(bool SHOW)
{
	//BOT
	if (SHOW) {
		std::cout << "TEST_BOT :  " << std::endl;
		std::cout << ".....create TEST Field" << std::endl;
	}
	Field testField;

	if (SHOW) {
		std::cout << ".....create TEST BOT1" << std::endl;
	}
	Bot1* testBot1 = new Bot1();
	//NAV == TRUE
	if (SHOW) {
		std::cout << "STATUS CHECK BOT 1" << std::endl;
	}
	assert(testBot1->name != "" && "NAME is empty");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;

	if (SHOW) {
		std::cout << "TEST XY" << std::endl;
	}
	assert(testBot1->x >= 0 && "START X --> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;

	assert(testBot1->x < 5 && "START X --> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;


	assert(testBot1->y >= 0 && "START Y--> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;	
	assert(testBot1->y < 5 && "START Y--> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;



	if (SHOW) {
		std::cout << "MOVE && SET BOT1 " << std::endl;
	}
	testBot1->setXY(1,2);
	assert(testBot1->x == 1 && "TEST : X = 1");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;
	assert(testBot1->y == 2 && "TEST : Y = 2");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;




	//RANDOM NUMBER CHECK
	if (SHOW) {
		std::cout << "RANDOM NUMBER CHECK" << std::endl;
	}
	for (int i = 0; i <= this->hardness; i++) {
		assert(testBot1->rand1_5() >= 0 && "RAND NUMBER 5 higher >= 0");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
		assert(testBot1->rand1_5() < 5 && "RAND NUMBER 5 lower < 5");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
		assert(testBot1->rand1_4() >= 0 && "RAND NUMBER 4 higher >= 0");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
		assert(testBot1->rand1_4() < 5 && "RAND NUMBER 5 lower < 5");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
	}


	//SORT CHECK

	for (int i = 0; i <= 0 + this->hardness; i++) {

	if (SHOW) {
		std::cout << "SORT CHECK: " << std::endl;
		std::cout << "... create a new TEST FIELD" << std::endl;
	}
	testField.setFullField(false);
	if(SHOW){
		std::cout << "UNSORT: " << std::endl;
		testField.drawField(true);
	}

	for (int i = 0; i <= 3; i++) {
		int x = this->rand1_4();
		int y = this->rand1_4();
		int sort = std::is_sorted(std::begin(testField.mine[x][y]), std::end(testField.mine[x][y]));
		assert(sort == 0 && "nicht Sortiert");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
	}

	testBot1->sort(testField, true);

	if(SHOW){
		std::cout << "SORT: " << std::endl;
		testField.drawField(true);
	}
}
	for (int i = 0; i <= 3; i++) {
		int x = this->rand1_4();
		int y = this->rand1_4();
		int sort = std::is_sorted(std::begin(testField.mine[x][y]), std::end(testField.mine[x][y]));
		assert(sort == 1 && "Sortiert");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
	}







	if (SHOW) {
		std::cout << ".....create TEST BOT2" << std::endl;
	}
	Bot2* testBot2 = new Bot2();
	if (SHOW) {
		std::cout << "STATUS CHECK BOT 2" << std::endl;
	}
	assert(testBot2->name != "" && "RAND NUMBER 5 lower < 5");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;

	if (SHOW) {
		std::cout << "TEST XY" << std::endl;
	}
	assert(testBot2->x >= 0 && "START X --> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;

	assert(testBot2->x < 5 && "START X --> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;

	assert(testBot2->y >= 0 && "START Y--> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;
	assert(testBot2->y < 5 && "START Y--> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;
	if (SHOW) {
		std::cout << "MOVE && SET BOT2 " << std::endl;
	}
	testBot2->setXY(1, 2);
	assert(testBot2->x == 1 && "TEST : X = 1");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;
	assert(testBot2->y == 2 && "TEST : Y = 2");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;



	//SORT CHECK

	for (int i = 0; i <= 0 + this->hardness; i++) {

		if (SHOW) {
			std::cout << "SORT CHECK: " << std::endl;
			std::cout << "... create a new TEST FIELD" << std::endl;
		}
		testField.setFullField(false);
		if (SHOW) {
			std::cout << "UNSORT: " << std::endl;
			testField.drawField(true);
		}

		for (int i = 0; i <= 3; i++) {
			int x = this->rand1_4();
			int y = this->rand1_4();
			int sort = std::is_sorted(std::begin(testField.mine[x][y]), std::end(testField.mine[x][y]));
			assert(sort == 0 && "nicht Sortiert");
			if (SHOW) { std::cout << "--> true" << std::endl; }
			this->counter++;
		}

		testBot2->sort(testField, true);

		if (SHOW) {
			std::cout << "SORT: " << std::endl;
			testField.drawField(true);
		}

		for (int i = 0; i <= 3; i++) {
			int x = this->rand1_4();
			int y = this->rand1_4();
			int sort = std::is_sorted(std::begin(testField.mine[x][y]), std::end(testField.mine[x][y]));
			assert(sort == 1 && "Sortiert");
			if (SHOW) { std::cout << "--> true" << std::endl; }
			this->counter++;
		}
	}




	//REVERS CHECK

	for (int i = 0; i <= 0 + this->hardness; i++) {

		if (SHOW) {
			std::cout << "REVERS CHECK: " << std::endl;
			std::cout << "... create a new TEST FIELD" << std::endl;
		}
		testField.setFullField(false);


		testBot2->sort(testField, true);
		if (SHOW) {
			std::cout << "SORT: " << std::endl;
			testField.drawField(true);
		}

		for (int i = 0; i <= 3; i++) {
			int x = this->rand1_4();
			int y = this->rand1_4();
			int sort = std::is_sorted(std::begin(testField.mine[x][y]), std::end(testField.mine[x][y]));
			assert(sort == 1 && "Sortiert");
			if (SHOW) { std::cout << "--> true" << std::endl; }
			this->counter++;
		}


		testBot2->reverse(testField, true);

		if (SHOW) {
			std::cout << "REVERS: " << std::endl;
			testField.drawField(true);
		}


		if (SHOW) {
			std::cout << "UNSORT: " << std::endl;
			testField.drawField(true);
		}

		for (int i = 0; i <= 3; i++) {
			int x = this->rand1_4();
			int y = this->rand1_4();
			int sort = std::is_sorted(std::begin(testField.mine[x][y]), std::end(testField.mine[x][y]));
			assert(sort == 0 && "nicht Sortiert");
			if (SHOW) { std::cout << "--> true" << std::endl; }
			this->counter++;
		}


		testBot2->reverse(testField, true);

		if (SHOW) {
			std::cout << "2x REVERS: " << std::endl;
			testField.drawField(true);
		}

		if (SHOW) {
			std::cout << "SORT: " << std::endl;
			testField.drawField(true);
		}

		for (int i = 0; i <= 3; i++) {
			int x = this->rand1_4();
			int y = this->rand1_4();
			int sort = std::is_sorted(std::begin(testField.mine[x][y]), std::end(testField.mine[x][y]));
			assert(sort == 1 && "Sortiert");
			if (SHOW) { std::cout << "--> true" << std::endl; }
			this->counter++;
		}

	}



	if (SHOW) {
		std::cout << ".....create TEST BOT3" << std::endl;
	}
	Bot3* testBot3 = new Bot3();
	if (SHOW) {
		std::cout << "STATUS CHECK BOT 3" << std::endl;
	}
	assert(testBot3->name != "" && "NAME");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;

	if (SHOW) {
		std::cout << "TEST XY" << std::endl;
	}
	assert(testBot3->x >= 0 && "START X --> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;

	assert(testBot3->x < 5 && "START X --> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;


	assert(testBot3->y >= 0 && "START Y--> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;
	assert(testBot3->y < 5 && "START Y--> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;

	if (SHOW) {
		std::cout << "MOVE && SET BOT3 " << std::endl;
	}
	testBot3->setXY(1, 2);
	assert(testBot3->x == 1 && "TEST : X = 1");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;
	assert(testBot3->y == 2 && "TEST : Y = 2");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;


	testField.setFullField(false);

	// SAMMELT nur UNGERADE ZAHLEN

	if (SHOW) {
		std::cout << "COL && UNG BOT3 " << std::endl;
	}

	for (int i = 0; i <= 3 + this->hardness; i++) {
		int x = this->rand1_4();
		int y = this->rand1_4();

		if (SHOW) {
			testField.drawField(true);
		}

		testBot3->collect(testField, true, x, y);

		for (int z = 0; z < 10; z++) {
			assert(testField.mine[x][y][z]%2 == 0 && "TEST col 3");	
		if (SHOW) {
			std::cout << "Feld [" << x << "][" << y << "][" << z + 1 << "]" << "--> true" << std::endl;
			std::cout << "--> true" << std::endl;
			}
		}

		if (SHOW) {
			testField.drawField(true);
		}	
	}









	if (SHOW) {
		std::cout << ".....create TEST BOT4" << std::endl;
	}
	Bot4* testBot4 = new Bot4();


	if (SHOW) {
		testField.drawField(true);
	}
	
	if (SHOW) {
		std::cout << "STATUS CHECK BOT 4" << std::endl;
	}
	assert(testBot4->name != "" && "NAME");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;

	if (SHOW) {
		std::cout << "TEST XY" << std::endl;
	}
	assert(testBot4->x >= 0 && "START X --> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;

	assert(testBot4->x < 5 && "START X --> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;


	assert(testBot4->y >= 0 && "START Y--> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;
	assert(testBot4->y < 5 && "START Y--> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;
	if (SHOW) {
		std::cout << "MOVE && SET BOT4 " << std::endl;
	}
	testBot4->setXY(1, 2);
	assert(testBot4->x == 1 && "TEST : X = 1");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;
	assert(testBot4->y == 2 && "TEST : Y = 2");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;


	// SAMMELT nur GERADE ZAHLEN
	testField.setFullField(false);

	if (SHOW) {
		std::cout << "COL && GER BOT4 " << std::endl;
	}

	for (int i = 0; i <= 3 + this->hardness; i++) {
		int x = this->rand1_4();
		int y = this->rand1_4();

		if (SHOW) {
			testField.drawField(true);
		}

		testBot4->collect(testField, true, x, y);
		if (SHOW) {
			testField.drawField(true);
		}

		for (int z = 0; z < 10; z++) {
			if (testField.mine[x][y][z] != 0) {
				assert(testField.mine[x][y][z] % 2 != 0 && "TEST col 4");
			}
			if (SHOW) {
				std::cout << "Feld [" << x << "][" << y << "][" << z + 1 << "]" << "--> true" << std::endl;
				std::cout << "--> true" << std::endl;
			}
		}

		if (SHOW) {
			testField.drawField(true);
		}
	}











	if (SHOW) {
		std::cout << ".....create TEST BOT5" << std::endl;
	}
	Bot5* testBot5 = new Bot5();
	if (SHOW) {
		std::cout << "STATUS CHECK BOT 5" << std::endl;
	}
	assert(testBot5->name != "" && "NAME");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;

	if (SHOW) {
		std::cout << "TEST XY" << std::endl;
	}
	assert(testBot5->x >= 0 && "START X --> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;

	assert(testBot5->x < 5 && "START X --> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;


	assert(testBot5->y >= 0 && "START Y--> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;
	assert(testBot5->y < 5 && "START Y--> VALUE");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;

	if (SHOW) {
		std::cout << "MOVE && SET BOT5 " << std::endl;
	}
	testBot5->setXY(1, 2);
	assert(testBot5->x == 1 && "TEST : X = 1");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;
	assert(testBot5->y == 2 && "TEST : Y = 2");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;


	// SAMMELT zahlen die größer als 9 sind und addiert die selbe zahl wenn sie unter 9 ist

	if (SHOW) {
		std::cout << "COL && UNG BOT5 " << std::endl;
	}
	testField.setFullField(false);

	for (int i = 0; i <= 3 + this->hardness; i++) {
		int x = this->rand1_4();
		int y = this->rand1_4();	

		if (SHOW) {
			testField.drawField(true);
		}

		int a[10];
		for (int z = 0; z < 10; z++) {
			a[z] = testField.mine[x][y][z];
		}
		testBot5->collect(testField, true, x, y);

		if (SHOW) {
			testField.drawField(true);
		}

		for (int z = 0; z < 10; z++) {
		
			if (testField.mine[x][y][z] != 0) {
				assert(testField.mine[x][y][z] == (a[z]*2) && "TEST col 5");
			}

			if (SHOW) {
				std::cout << "Feld [" << x << "][" << y << "][" << z + 1 << "]" << "--> true" << std::endl;
				std::cout << "--> true" << std::endl;
			}
			this->counter++;
		}

		if (SHOW) {
			testField.drawField(true);
		}
	}











	// DELETE
	if (SHOW) {
		std::cout << std::endl << "DELETE OBJEKTS" << std::endl;
	}
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
	if (SHOW) {
		std::cout << std::endl << "TEST:" << this->counter << "   BOT CHECK SUCCESS 0 ERROR" << std::endl;
		std::cout << "_________________________________________________________________" << std::endl << std::endl << std::endl;
	}
	this->counter = 0;
}
void UnitTest::TEST_GAME(bool SHOW)
{
	//GAME
	if (SHOW) {
		std::cout << "TEST_GAME :  " << std::endl;
		std::cout << ".....create TEST GAME" << std::endl;
	}
	GAME* testGAME = new GAME();
	
	//BOT 
	if (SHOW) {
		std::cout << std::endl << "CHECK BOTS POINTER" << std::endl;
	}
	assert(testGAME->BOT_COUNTER == 0 && "BOTS --> not EMPTY");
	if (SHOW) { std::cout << "--> true" << std::endl; }
	this->counter++;
	if (SHOW) {
		std::cout << std::endl << "CREATE 5 BOTS" << std::endl;
	}
	testGAME->choose_BOT(true);
	for (int i = 0; i < 5; i++) {

		assert(testGAME->BOTS[i] != nullptr && "BOTS --> CREATE");
		if (SHOW) { std::cout << "--> true" << std::endl; }
		this->counter++;
	}
	if (SHOW) {
		std::cout << std::endl << "CREATE 5 BOTS SUCCESSFUL" << std::endl;

		// DELETE
		std::cout << std::endl << "DELETE OBJEKTS" << std::endl;
	}
	testGAME->~GAME();
	delete(testGAME);
	if (SHOW) {
		std::cout << std::endl << "TEST:" << this->counter << "   BOT CHECK SUCCESS 0 ERROR" << std::endl;
		std::cout << "_________________________________________________________________" << std::endl << std::endl << std::endl;
	}
	this->counter = 0;
}
void UnitTest::TEST(bool SHOW)
{
	this->TEST_UNITTEST(SHOW);
	this->TEST_BOT(SHOW);
	this->TEST_FIELD(SHOW);
	this->TEST_GAME(SHOW);
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


// MENU 
int UnitTest::setHardness() {
	int input;
	do {
		std::cin >> input;
		if (std::cin.fail() || (input != 1 && input != 2 && input != 3 && input != 4)) {
			std::cin.clear();
			std::cin.ignore();
			//throw std::invalid_argument("Input failed");
			std::cout << "Invalid" << std::endl;
		}
	} while (input != 1 && input != 2 && input != 3 && input != 4);
	return input;
}
void UnitTest::HARD_MENU() {
	system("cls");
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "        ###########################################" << std::endl;
	std::cout << "        ##               HARD-MENU               ##" << std::endl;
	std::cout << "        ###########################################" << std::endl;
	std::cout << "        ##                                       ##" << std::endl;
	std::cout << "        ##    1 ................. NORMAL  	 ##" << std::endl;
	std::cout << "        ##    2 ................. MEDUIM	 ##" << std::endl;
	std::cout << "        ##    3 ................. HARD		 ##" << std::endl;
	std::cout << "        ##    4 ................. EXTREM         ##" << std::endl;
	std::cout << "        ##                                       ##" << std::endl;
	std::cout << "        ###########################################" << std::endl;
	std::cout << "        ###########################################" << std::endl << std::endl;
	std::cout << std::endl << std::endl;
	std::cout << std::endl << std::endl;
}
void UnitTest::testMENU(int input) {
	

	if(input != 1){
	this->HARD_MENU();
		switch (this->setHardness())
		{
			case 1: this->hardness = 0; break;
			case 2: this->hardness = 2; break;
			case 3: this->hardness = 6; break;
			case 4: this->hardness = 10; break;
			default:break;
		}
	}

	switch (input)
	{
	    case 1: this->TEST(false); break;
	    case 2: this->TEST_FIELD(true); break;
		case 3: this->TEST_BOT(true); break;
	    case 4: this->TEST_GAME(true); break;
	    case 5: this->TEST(true); break;
		default:break;
	}


}