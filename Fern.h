#ifndef _FERN_
#define _FERN_

#include <iostream>
#include <string>
#include "Plant.h"

using namespace std;

class Fern : public Plant {
	public:
		Fern(string s, int a, Person* o, int g) : Plant(s, a, o, g) {}

		void fernicate();
};

#endif
