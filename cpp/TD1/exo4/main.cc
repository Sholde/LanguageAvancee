#include <iostream>
using namespace std;

#include "Point.h"

main() {
	Point* p1 = new Point(10, 17);
	Point* p2 = new Point(-6, 7);

	p1->afficher();
	p2->afficher();

	p1->cloner(*p2);

	p1->afficher();
	p2->afficher();
	
	delete p1;
	delete p2;
}
