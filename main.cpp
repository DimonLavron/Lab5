#include <iostream>
#include "Chainsaw.h"

using namespace std;

int main()
{
	Chainsaw first("Chainsaw1000", 50, 300, 4, 6);
	Chainsaw second("Chainsaw2000", 100, 400, 4, 6);
	Chainsaw third("Chainsaw3000", 150, 500, 4, 6);

	first.printAll();
	second.printAll();
	third.printAll();
}