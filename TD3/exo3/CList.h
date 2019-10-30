#ifndef _CList_h
#define _CList_h
#include <iostream>
using namespace std;

struct node {
	int value;
	node* next;
};

class List {
	protected:
		node* head;
		int size;
	
	public:
		List();
		~List();

		const int getSize();
		int& operator[](const int value);
		friend ostream& operator<<(ostream& o, List const& l);
		friend istream& operator>>(istream& in, List const& aList);

		virtual List& operator>(int& value);
		List& operator<(const int value);
		
};
#endif
