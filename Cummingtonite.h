#ifndef _CUMMINGTONITE_
#define _CUMMINGTONITE_

#include <string>
#include "Rock.h"

using namespace std;

class Cummingtonite : public Rock {
	public:
		Cummingtonite(string s, int a, Person* o) : Rock(s, a, o, 6, "fracture", 3, "cancer") {}
};

#endif
