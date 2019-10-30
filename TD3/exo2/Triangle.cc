#include <iostream>
using namespace std;

#include "Triangle.h"
#include "Point.h"

Triangle::Triangle():a(0, 0), b(1, 1), c(1, 0) {}

Triangle::Triangle(Point const& a):a(a), b(1, 1), c(0, 0) {}

Triangle::Triangle(Point const& a, Point const& b):a(a), b(b), c(0, 0) {}

Triangle::Triangle(Point const& a, Point const& b, Point const& c):a(a), b(b), c(c) {}

void Triangle::afficher() {
	cout << "Triangle: " << endl;
	// centre
	cout << "Point centre: " << endl;
	this->getCentre().afficher();
	// a
	cout << "Point a: " << endl;
	this->a.afficher();
	// b
	cout << "Point b: " << endl;
	this->b.afficher();
	// c
	cout << "Point c: " << endl;
	this->c.afficher();
}

void Triangle::deplacer(const int xx, const int yy) {
	// a
	this->a.setX(this->a.getX() + xx);
	this->a.setY(this->a.getY() + yy);
	// b
	this->b.setX(this->b.getX() + xx);
	this->b.setY(this->b.getY() + yy);
	// c
	this->c.setX(this->c.getX() + xx);
	this->c.setY(this->c.getY() + yy);
}

Triangle::~Triangle() {
	cout << "Triangle: appel au destructeur" << endl;
}
