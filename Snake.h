#ifndef _SNAKE_
#define _SNAKE_

#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Snake : public Animal {
	public:
		Snake(string s, int a, Person* o, char g, bool i) : Animal(s, a, o, g, i) {}

		void snek();
};

#endif
