#ifndef _PLANT_
#define _PLANT_

#include <string>
#include "Pet.h"

using namespace std;

class Plant : public Pet {
	private:
		int green_ness;
	public:
		Plant(string s, int a, Person* o, int g) : Pet(s, a, o), green_ness(g) {}
};

#endif
