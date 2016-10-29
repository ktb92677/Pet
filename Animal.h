#ifndef _ANIMAL_
#define _ANIMAL_

#include <string>
#include "Pet.h"

using namespace std;

class Animal : public Pet {
	private:
		char gender;
		bool indoor;
	public:
		Animal(string s, int a, Person* o, char g, bool i) : Pet(s, a, o), gender(g), indoor(i) {}
};

#endif
