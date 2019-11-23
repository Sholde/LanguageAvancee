#include <iostream>
using namespace std;

#include "CString.h"
#include "Definition.h"

int main() {
	
	Definition homer("Homer", "Buveur de biere");
	cout << "la definition du mot " << homer.getClef() << " est " << homer.getDef() << endl;

	return 0;
}
