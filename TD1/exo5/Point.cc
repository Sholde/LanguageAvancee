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

const int Point::get_x() {
	return this->x;
}

const int Point::get_y() {
	return this->y;
}

void Point::set_x(int number) {
	this->x = number;
}

void Point::set_y(int number) {
	this->y = number;
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
	cout << "Point: appel au destructeur" << endl;
}
