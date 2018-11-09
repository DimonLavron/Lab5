#ifndef CHAINSAW
#define CHAINSAW

#include <iostream>
#include <string>

using namespace std;

class Chainsaw
{
private:
	string name;
	int power;
	int numberOfTurnes;
protected:
	int var1;
	int var2;
public:
	int var3;
	string var4;
	string getName();
	int getPower();
	int getNumberOfTurnes();
	void printAll();
	Chainsaw();
	Chainsaw(string newName, int newPower, int newNumberOfTurnes, int newVar1, int newVar2);
	~Chainsaw();
};

#endif