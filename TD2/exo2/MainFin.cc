#include <iostream>
using namespace std;

#include "VecteurListe.h"

int main() {
	Vecteur v(3);
	Vecteur u;
	
	u = v;
	cout << u << endl;

	Vecteur k(7);
	cout << "k[1] = " << k[1] << endl << endl;

	cout << "u != v : " << (u != v) << endl << endl;

	u[0] = 0;
	cout << u << endl;
	
	Vecteur g(3);
	cin >> g;
	cout << g << endl;

	g = u + v;
	cout << g << endl;
}
