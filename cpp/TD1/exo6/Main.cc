#include <iostream>
using namespace std;

#include "CString.h"

int main() {
	CString s1("toto"),
			s2('q'),
			s3;

	cout << "nbrChaines" << CString::nbrChaines() << endl;

	s3 = s1.plus('w');
	cout << "s3=" << s3.getString() << endl;

	if( s1.plusGrandQue(s2) ) {
		cout << "plus grand" << endl;
	}
	if( s1.infOuEgale(s2) ) {
		cout << "plus petit" << endl;
	}

	s3 = s1.plusGrand(s2);
	cout << "s3=" << s3.getString() << endl;
}
