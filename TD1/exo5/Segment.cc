#include <iostream>
using namespace std;
#include "math.h"

#include "Segment.h"
#include "Point.h"

#define carre(x) ((x)*(x))
#define lengh(x1, x2, y1, y2)  (sqrt(carre(x1-x2) + carre(y1-y2)))

Segment::Segment() {
	this->a = new Point();
	this->b = new Point();
}

Segment::Segment(const Point &a) {
	this->a = new Point();
	this->a->cloner(a);
	this->b =new Point();
}

Segment::Segment(const Point &a, const Point &b) {
	this->a = new Point();
	this->a->cloner(a);
	this->b = new Point();
	this->b->cloner(b);
}

const float Segment::longueur() {
	float res;

	res = lengh(this->a->get_x(), this->b->get_x(), this->a->get_y(), this->b->get_y());
	
	return res;
}

bool Segment::estVertical() {
	return this->a->get_x() == this->b->get_x();
}

bool Segment::estHorizontal() {
	return this->a->get_y() == this->b->get_y();
}

bool Segment::estSurDiagonale() {
	return this->a->get_y() - this->b->get_y() == this->a->get_x() - this->b->get_x();
}

Segment::~Segment() {
	cout << "Segment: appel au destructeur" << endl;
	delete a;
	delete b;
}
