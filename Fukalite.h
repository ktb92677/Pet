#ifndef _FUKALITE_
#define _FUKALITE_

#include <string>
#include "Rock.h"

using namespace std;

class Fukalite : public Rock {
	public:
		Fukalite(string s, int a, Person* o) : Rock(s, a, o, 9, "twinning", 30, "calcium") {}
};

#endif
