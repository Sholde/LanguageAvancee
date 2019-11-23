#include <iostream>
#include <string>
using namespace std;
#include "Point.h"
#include "PointColor.h"

PointColor::PointColor(int xx, int yy, string color):Point(xx, yy), color(color) {}

PointColor::PointColor(Point const& p, string color):Point(p), color(color) {}

PointColor::PointColor(PointColor const& p):Point(p), color(p.color) {}

void PointColor::afficher() {
	this->Point::afficher();
	cout << "color: " << this->color << endl;
}
