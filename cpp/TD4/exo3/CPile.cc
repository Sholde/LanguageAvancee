#include <iostream>
using namespace std;
#include "CList.h"
#include "CPile.h"

template<typename T>
CPile<T>& CPile<T>::operator>(T& value){
	if(this->head == NULL) {
		cout << "Pile vide" << endl;
		exit(1);
	}
	else {
		node<T>* tmp = this->head;
		value = this->head->value;
		this->head = this->head->next;
		delete tmp;
		this->size--;
		return *this;
	}
}
