#include <SFML/System.hpp>
#include <iostream>
#include "Entity.h"

using namespace std;

int main() {
	Entity entity(4, 5);
	cout << "X: " << entity.getx() << "\nY: " << entity.gety() << endl;
	entity.setx(10);
	entity.sety(15);
	cout << "X: " << entity.getx() << "\nY: " << entity.gety() << endl;
	return 1;
}