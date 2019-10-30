#include <iostream>
using namespace std;

#include "Segment.h"

int main() {
	Segment* s = new Segment(Point(3,3), Point(3,5));

	cout << "Longueur: " << s->longueur() << endl;
	cout << "Vertical: " << s->estVertical() << endl;
	cout << "Horizontal: " << s->estHorizontal() << endl;
	cout << "Diagonale: " << s->estSurDiagonale() << endl;
	
	delete s;
}
