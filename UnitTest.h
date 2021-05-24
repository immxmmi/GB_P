#pragma once
#include <vector>
class UnitTest
{
	


private:
	// RANDOM NUMBERS TEST
	int rand1_3();
	int rand1_4();
	int rand1_5();
	int rand1_9();
	int rand1_10();
	int rand1_15();
	int counter;
	int hardness;
	int setHardness();
	void HARD_MENU();
	void TEST_UNITTEST(bool SHOW);
	void TEST_FIELD(bool SHOW);
	void TEST_BOT(bool SHOW);
	void TEST_GAME(bool SHOW);
	void TEST(bool SHOW);
protected:

public:
	UnitTest();
	~UnitTest();
	void testMENU(int input);

};

