#include <iostream>
using namespace std;
#include "Form.h"

Form::Form():centre(0, 0) {}

Form::Form(int x, int y):centre(x, y) {}

Form::~Form() {}

Point& Form::getCentre() {
	return centre;
}

void Form::deplacer(int dx, int dy) {
	this->centre.setX(this->centre.getX() + dx);
	this->centre.setY(this->centre.getY() + dy);
}

void Form::afficher() {
	cout << "Je ne sais pas quoi afficher" << endl;
}
