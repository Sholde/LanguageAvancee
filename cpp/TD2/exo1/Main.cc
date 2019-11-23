#include <iostream>
using namespace std;

#include "CString.h"

int main() {
	CString s1("toto"),
			s2('q'),
			s3,
			s4("jfhgh");

	cout << "nbrChaines" << CString::nbrChaines() << endl;

	s3 = s1.plus('t');
	cout << "s3=" << s3.getString() << endl;

	if( s1 > s2 ) {
		cout << "plus grand" << endl;
	}
	if( s1 <= s2 ) {
		cout << "plus petit" << endl;
	}

	s3 = s1.plusGrand(s2);
	cout << "s3=" << s3.getString() << endl;

	s3 = s4 + 't';
	cout << "s3=" << s3.getString() << endl;
}
