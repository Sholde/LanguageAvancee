#include <cstdlib>
#include <iostream>
using namespace std;
#include "CList.h"

template<typename T>
List<T>::List() {
	this->head = NULL;
	this->size = 0;
}

template<typename T>
List<T>::~List() {
	if(this->size > 0) {
		node<T>* tmp;
		for(int i = 0; this->head != NULL && i < this->size; i++) {
			tmp = this->head->next;
			delete this->head;
			this->head = tmp;
		}
	 }
}

template<typename T>
const int List<T>::getSize() {
	return this->size;
}

template<typename T>
T& List<T>::operator[](const T value) {
	node<T>* tmp = this->head;
	for(int j = 1; tmp != NULL && j < value; j++) {
		tmp = tmp->next;
	}
	if(tmp == NULL)
		exit(1);
	else
		return tmp->value;
}

template<typename T>
List<T>& List<T>::operator<(const T value) {
	node<T>* tmp = new node<T>;
	tmp->value = value;
	if( head == NULL ) {
		head = tmp;
		tmp->next = NULL;
		size++;
	}
	else {
		node<T>* tmp2 = head;
		tmp->next = tmp2;
		head = tmp;
		size++;
	}
	return *this;
}

template<typename T>
List<T>& List<T>::operator>(T& value) {
	cout << "idk" << endl;
	return *this;
}

template<typename T>
ostream& operator<<(ostream& o, List<T> const& l) {
	node<T>* tmp;
	tmp = l.head;
	for(int i = 0; tmp != NULL && i < l.size; i++) {
		o << tmp->value;
		if( tmp->next != NULL) {
			o << " -> ";
		}
		tmp = tmp->next;
	}
	o << endl;
	return o;
}

template<typename T>
istream& operator>>(istream& in, List<T> const& aList) {
	cout << "La taille du tableau est de " << aList.size << endl;
	node<T>* tmp = aList.head;
	for( int i = 0; tmp != NULL && i < aList.size; i++) {
		cout << i << " : ";
		in >> tmp->value;
		tmp = tmp->next;
	}
	return in;
}
