#ifndef _CAT_
#define _CAT_

#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Cat : public Animal {
	public:
		Cat(string s, int a, Person* o, char g, bool i) : Animal(s, a, o, g, i) {}

		void back_shit_off_table();
};

#endif
