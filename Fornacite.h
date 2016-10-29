#ifndef _FORNACITE_
#define _FORNACITE_

#include <string>
#include "Rock.h"

using namespace std;

class Fornacite : public Rock {
	public:
		Fornacite(string s, int a, Person* o) : Rock(s, a, o, 4, "perfect", 15, "potassium") {}
};

#endif
