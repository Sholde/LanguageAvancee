#include <iostream>
using namespace std;

void echange (int& a, int& b) {
	int c = b;
	b = a;
	a = c;
}

main() {
	int a = 1;
	int b = 2;

	echange(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
