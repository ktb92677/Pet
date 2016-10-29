#ifndef _PET_
#define _PET_

#include <string>
#include "Person.h"

using namespace std;

class Pet {
	private:
		string name;
		int age;
		Person* owner;
	public:
		Pet(string n, int a, Person* o) : name(n), age(a), owner(o) {}
};

#endif
