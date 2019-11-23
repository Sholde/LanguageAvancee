#include <cstdlib>
#include <iostream>
using namespace std;
#include "CList.h"

List::List() {
	this->head = NULL;
	this->size = 0;
}

List::~List() {
	if(this->size > 0) {
		node* tmp;
		for(int i = 0; this->head != NULL && i < this->size; i++) {
			tmp = this->head->next;
			delete this->head;
			this->head = tmp;
		}
	 }
}

const int List::getSize() {
	return this->size;
}

int& List::operator[](const int value) {
	node* tmp = this->head;
	for(int j = 1; tmp != NULL && j < value; j++) {
		tmp = tmp->next;
	}
	if(tmp == NULL)
		exit(1);
	else
		return tmp->value;
}

List& List::operator<(const int value) {
	node* tmp = new node;
	tmp->value = value;
	if( head == NULL ) {
		head = tmp;
		tmp->next = NULL;
		size++;
	}
	else {
		node* tmp2 = head;
		tmp->next = tmp2;
		head = tmp;
		size++;
	}
	return *this;
}

List& List::operator>(int& number) {
	cout << "idk" << endl;
	return *this;
}

ostream& operator<<(ostream& o, List const& l) {
	node* tmp;
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

istream& operator>>(istream& in, List const& aList) {
	cout << "La taille du tableau est de " << aList.size << endl;
	node* tmp = aList.head;
	for( int i = 0; tmp != NULL && i < aList.size; i++) {
		cout << i << " : ";
		in >> tmp->value;
		tmp = tmp->next;
	}
	return in;
}
