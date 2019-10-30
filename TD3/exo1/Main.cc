#include <string>
#include <iostream>
using namespace std;
#include "Point.h"
#include "PointColor.h"

int main() {
	Point p1;
	Point* pt_p;
	PointColor p2;
	
	p1.afficher();
	p2.afficher();
	pt_p = new Point();
	pt_p->afficher();
	delete pt_p;
	pt_p = new PointColor(1, 1, "bleu");
	pt_p->afficher();
	return 0;
}
