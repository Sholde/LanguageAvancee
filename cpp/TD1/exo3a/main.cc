#include <iostream>
using namespace std;

void tableauEcriture(int* tab, const int n) {
	for( int iter = 0; iter < n; iter++ ) {
		tab[iter] = iter;
	}
}

void tableauLecture(const int* const tab, const int n) {
	for( int iter = 0; iter < n; iter++ ) {
		cout << tab[iter] << endl;
	}
}

main() {

	int n = 3;
	int* tab = new int[n];

	tableauEcriture(tab, n);
	tableauLecture(tab, n);

	delete[]tab;
}
