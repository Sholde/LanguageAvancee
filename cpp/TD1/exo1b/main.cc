#include <iostream>
using namespace std;
#include <string.h>

main() {

	char** tab;
	tab = new char*[3];
	tab[0] = new char[strlen("truc")+1];
	strcpy(*tab, "truc");
	tab[1] = new char[strlen("machin")+1];
	strcpy(tab[1], "machin");
	tab[2] = new char[strlen("chose")+1];
	strcpy(tab[2], "chose");

	int iter = 0;
	while(iter < 3) {
		cout << tab[iter] << endl;
		iter++;
	}
	
	delete[]tab[0];
	delete[]tab[1];
	delete[]tab[2];
}
