#include <iostream>
#include "Pet.h"
#include "Snake.h"
#include "Person.h"

using namespace std;

int main() {
	Pet* pet = new Snake("jim", 3, new Person(), 'm', true);

	(static_cast<Snake*>(pet))->snek();

	return 0;
}
