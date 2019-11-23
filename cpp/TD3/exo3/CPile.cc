#include <iostream>
using namespace std;
#include "CList.h"
#include "CPile.h"

CPile& CPile::operator>(int& value){
	if(head == NULL) {
		cout << "Pile vide" << endl;
		exit(1);
	}
	else {
		node* tmp = head;
		value = head->value;
		head = head->next;
		delete tmp;
		size--;
		return *this;
	}
}
