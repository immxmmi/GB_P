#pragma once
#include <vector>


//Vector
typedef std::vector<std::vector<std::vector<int>>> vector3D;


class Field
{
private:
protected:

public:
	int sum;
	vector3D mine;
	//Constructor
	Field();
	//Destructor
	~Field();
	// Feld Generieren 3D
	void setFullField(bool Test);
	// ZEICHNET DIE GANZEN FELDER AUF
	void drawField();
	//Feld einfügen an einer Bestimmten stelle
	void setField(int x, int y, int z, int value);
	//Zufalls Zahlen von 1-9 
	int rand1_9();

};

