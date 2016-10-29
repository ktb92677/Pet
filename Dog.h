#ifndef _DOG_
#define _DOG_

#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Dog : public Animal {
	public:
		Dog(string s, int a, Person* o, char g, bool i) : Animal(s, a, o, g, i) {}

		void eat_poop();
};

#endif
