#include <iostream>
using namespace std;
#include "math.h"

#include "Form.h"
#include "Segment.h"
#include "Point.h"

#define carre(x) ((x)*(x))
#define lengh(x1, x2, y1, y2)  (sqrt(carre(x1-x2) + carre(y1-y2)))

Segment::Segment():a(1, 1), b(0, 0) {}

Segment::Segment(Point const& a):a(a), b(0, 0) {}

Segment::Segment(Point const& a, Point const& b):a(a), b(b) {}

const float Segment::longueur() {
	float res;

	res = lengh(this->a.getX(), this->b.getX(), this->a.getY(), this->b.getY());
	
	return res;
}

bool Segment::estVertical() {
	return this->a.getX() == this->b.getX();
}

bool Segment::estHorizontal() {
	return this->a.getY() == this->b.getY();
}

bool Segment::estSurDiagonale() {
	return this->a.getY() - this->b.getY() == this->a.getX() - this->b.getX();
}

void Segment::afficher() {
	cout << "Segment: " << endl;
	// centre
	cout << "Point centre: " << endl;
	this->getCentre().afficher();
	// a
	cout << "Point a: " << endl;
	this->a.afficher();
	// b
	cout << "Point b: " << endl;
	this->b.afficher();
}

Segment::~Segment() {
	cout << "Segment: appel au destructeur" << endl;
}
