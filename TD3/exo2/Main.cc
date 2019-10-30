#include "Form.h"
#include "Segment.h"
#include "Triangle.h"
#include <iostream>
#include <list>
using namespace std;

int main() {
	list<Form *> l;
	Point tmp1(5, 7), tmp2(87, 9);
	Segment s(tmp1);
	Triangle t(tmp1, tmp2);

	Form* l1 = &s;
	Form* l2 = &t;
	
	l.push_back(l1);
	l.push_back(l2);

	int number = 1;
	for(list<Form *>::iterator i = l.begin(); i != l.end(); i++, number ++) {
		cout << "Forme " << number << endl;
		(*i)->afficher();
	}

	number = 1;
	for(list<Form *>::iterator i = l.begin(); i != l.end(); i++, number ++) {
		cout << "Forme " << number << endl;
		(*i)->deplacer(5, 5);
	}

	number = 1;
	for(list<Form *>::iterator i = l.begin(); i != l.end(); i++, number ++) {
		cout << "Forme " << number << endl;
		(*i)->afficher();
	}

	
	return 0;
}
