#include <iostream>
using namespace std;

#include "Vecteur.h"
#include "List.h"

int main() {
	List l(1),
		 t(5),
		 r(t),
		 q(5),
		 f(2);

	cout << "nb : " << l.getSize() << endl;
	cout << "nb : " << t.getSize() << endl;
	cout << "nb : " << r.getSize() << endl;
	cout << r;
	cout << t;
	cout << "r[4] = " << r[4] << endl;
	r.add(2, 100).remove(1);
	cout << "r : " << r;
	l = r;
	cout << "l : " << l;
	r = q;
	cout << "r : " << r;
	r = f;
	cout << "r : " << r;
	r = q + t;
	cout << "r : " << r;
	r = r - t;
	cout << "r : " << r;

	List g(3);
	cin >> g;
	cout << "g : " << g;
	cout << (r == t) << endl;
	cout << (r != t) << endl;
}
