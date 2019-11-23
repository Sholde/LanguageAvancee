#include <iostream>
using namespace std;
#include "Point.h"

Point::Point() {
	this->x = 0;
	this->y = 0;
}

Point::Point(const int a, const int b) {
	this->x = a;
	this->y = b;
}

Point::Point(Point const& p) {
	this->x = p.x;
	this->y = p.y;
}

const int Point::getX() {
	return this->x;
}

const int Point::getY() {
	return this->y;
}
	
void Point::afficher() {
	cout << "Point: " << endl;
	cout << "x: " << this->x << endl;
	cout << "y: " << this->y << endl;
}
	
void Point::cloner(const Point &p) {
	this->x = p.x;
	this->y = p.y;
}
	
Point::~Point() {
	cout << "Point: appel au destructeur" << endl;
}
