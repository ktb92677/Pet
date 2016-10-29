#ifndef _CACTUS_
#define _CACTUS_

#include <iostream>
#include <string>
#include "Plant.h"

using namespace std;

class Cactus : public Plant {
	public:
		Cactus(string s, int a, Person* o, int g) : Plant(s, a, o, g) {}

		void poke();
};

#endif
