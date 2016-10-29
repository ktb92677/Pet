#ifndef _ROCK_
#define _ROCK_

#include <string>
#include "Pet.h"

using namespace std;

class Rock : public Pet {
	private:
		int hardness;
		string cleavage;
		int color;
		string chemical_comp;
	public:
		Rock(string s, int a, Person* o, int h, string c, int col, string ch) : Pet(s, a, o), hardness(h), cleavage(c), color(col), chemical_comp(ch) {}
};

#endif
