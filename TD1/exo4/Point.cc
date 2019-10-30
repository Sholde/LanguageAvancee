#include <iostream>
using namespace std;
#include "Point.h"

Point::Point() {
	this->x = 10;
	this->y = 10;
}

Point::Point(int a, int b) {
	this->x = a;
	this->y = b;
}

Point::Point(const Point &p) {
	this->x = p.x;
	this->y = p.y;
}
	
void Point::afficher() {
	cout << this->x << endl;
	cout << this->y << endl;
}
	
void Point::cloner(const Point &p) {
	this->x = p.x;
	this->y = p.y;
}
	
Point::~Point() {
	cout << "appel au destructeur" << endl;
}
