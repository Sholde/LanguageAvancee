#include <cstdlib>
#include <iostream>
using namespace std;
#include "List.h"

List::List() {
	this->current = NULL;
	this->size = 0;
}

List::List(const int number) {
	if(number > 0) {
		this->current = NULL;
		this->size = number;
		nodePtr n, tmp;
		tmp = this->current;
		for(int i = 0; i < number; i++) {
			n = new node;
			n->number = i;
			n->next = NULL;
			if(tmp == NULL) {
				this->current = n;
				tmp = n;
			}
			else {
				tmp->next = n;
				tmp = tmp->next;
			}
		}
	}
	else {
		this->size = 0;
		this->current = NULL;
	}
}

List::List(List const& aList) {
	if(aList.size > 0) {
		this->current = NULL;
		this->size = aList.size;
		
		nodePtr n, tmp_current, tmp_aList;
		tmp_current = this->current;
		tmp_aList = aList.current;
		
		for(int i = 0; tmp_aList != NULL && i < this->size; i++) {
			n = new node;
			n->number = tmp_aList->number;
			n->next = tmp_aList->next;
			
			if(tmp_current == NULL) {
				this->current = n;
				tmp_current = n;
				tmp_aList = tmp_aList->next;
			}
			else {
				tmp_current->next = n;
				tmp_current = tmp_current->next;
				tmp_aList = tmp_aList->next;
			}
		}
	}
	else {
		this->size = 0;
		this->current = NULL;
	}
}

List::~List() {
	if(this->size > 0) {
		nodePtr tmp;
		for(int i = 0; this->current != NULL && i < this->size; i++) {
			tmp = this->current->next;
			delete this->current;
			this->current = tmp;
		}
	 }
}

const int List::getSize() {
	return this->size;
}

List& List::add(int indice, int number) {
	if(indice > this->size)
		exit(1);
	else {
		nodePtr n = new node;
		n->number = number;

		nodePtr tmp = this->current;
		for(int i = 0; tmp != NULL && i < indice; i++) {
			tmp = tmp->next;
		}
		nodePtr tmp2 = tmp->next;
		tmp->next = n;
		n->next = tmp2;
		this->size++;
		return *this;
	}
}

List& List::remove(int indice) {
	if(indice > this->size || this->size == 0)
		exit(1);
	else {
		nodePtr tmp = this->current;
		for(int i = 0; tmp != NULL && i < indice - 1; i++) {
			tmp = tmp->next;
		}
		nodePtr tmp2 = tmp->next;
		if(tmp2->next != NULL)
			tmp2 = tmp2->next;
		delete tmp->next;
		tmp->next = tmp2;
		this->size--;
		return *this;
	}
}

List& List::operator =(List const& aList) {
	if(aList.size > 0) {
		nodePtr n, tmp_current, tmp_aList, after_current, before_aList;
		tmp_current = this->current;
		tmp_aList =  aList.current;
		after_current = tmp_current;
		before_aList = tmp_aList;
		
		if( this->size <= aList.size) {
			int i = 0;
			for(; tmp_current != NULL && tmp_aList != NULL && i < aList.size; i++) {
				tmp_current->number = tmp_aList->number;
				after_current = tmp_current;
				tmp_current = tmp_current->next;
				tmp_aList = tmp_aList->next;
			}
			
			if(tmp_current == NULL)
				tmp_current = after_current;
			
			for(; tmp_aList != NULL && i < aList.size; i++) {
				n = new node;
				n->number = tmp_aList->number;
				n->next = tmp_aList->next;
				if(tmp_current == NULL) {
					this->current = n;
					tmp_current = this->current;
				}
				else {
					tmp_current->next = n;
					tmp_current = tmp_current->next;
				}
				tmp_aList = tmp_aList->next;
			}
			this->size = aList.size;
		}
		else {
			int i = 0;
			for(; tmp_current != NULL && tmp_aList != NULL && i < aList.size; i++) {
				tmp_current->number = tmp_aList->number;
				after_current = tmp_current;
				tmp_current = tmp_current->next;
				tmp_aList = tmp_aList->next;
			}

			after_current->next = NULL;
			nodePtr tmp;
			
			for(; tmp_current != NULL && i < this->size; i++) {
				tmp = tmp_current;
				tmp_current = tmp_current->next;
				delete tmp;
			}
			this->size = aList.size;
		}
	}
	else
		exit(1); //exception
	return *this;
}

List List::operator +(List const& aList) {
	if(this->size != aList.size)
		exit(1);
	
	List l;
	l.size = this->size;
	l.current = NULL;
	
	nodePtr tmp_current, tmp_aList, tmp_l, n;
	tmp_current = this->current;
	tmp_aList = aList.current;
	tmp_l = l.current;

	for(int i = 0; tmp_current != NULL && tmp_aList != NULL && i < l.size; i++) {
		n = new node;
		n->number = tmp_current->number + tmp_aList->number;
		n->next = NULL;
		
		if(tmp_l == NULL) {
			l.current = n;
			tmp_l = n;
		}
		else {
			tmp_l->next = n;
			tmp_l = tmp_l->next;
		}
		
		tmp_current = tmp_current->next;
		tmp_aList = tmp_aList->next;
	}
	
	return l;
}

List List::operator -(List const& aList) {
	if(this->size != aList.size)
		exit(1);
	
	List l;
	l.size = this->size;
	l.current = NULL;
	
	nodePtr tmp_current, tmp_aList, tmp_l, n;
	tmp_current = this->current;
	tmp_aList = aList.current;
	tmp_l = l.current;

	for(int i = 0; tmp_current != NULL && tmp_aList != NULL && i < l.size; i++) {
		n = new node;
		n->number = tmp_current->number - tmp_aList->number;
		n->next = NULL;
		
		if(tmp_l == NULL) {
			l.current = n;
			tmp_l = n;
		}
		else {
			tmp_l->next = n;
			tmp_l = tmp_l->next;
		}
		
		tmp_current = tmp_current->next;
		tmp_aList = tmp_aList->next;
	}
	
	return l;
}

int& List::operator [](const int number) {
	if( number < 0 || number >= this->size)
		exit(1); //exception
	else {
		nodePtr tmp = this->current;
		for(int i = 0; tmp != NULL && i < this->size; i++) {
			if(i == number) {
				return tmp->number;
			}
			tmp = tmp->next;
		}
		exit(1); //exception
	}
}

bool List::operator ==(List const& aList) {
	if(this->size != aList.size)
		return false;
	else {
		nodePtr tmp_current, tmp_aList;
		tmp_current = this->current;
		tmp_aList = aList.current;

		for(int i = 0; tmp_current != NULL && tmp_aList != NULL && i < this->size; i++) {
			if(tmp_current->number != tmp_aList->number)
				return false;
		}
		return true;
	}
}

bool List::operator !=(List const& aList) {
	return !(*this == aList);
}

ostream& operator<<(ostream& o, List const& l) {
	nodePtr tmp;
	tmp = l.current;
	for(int i = 0; tmp != NULL && i < l.size; i++) {
		o << tmp->number;
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
	nodePtr tmp = aList.current;
	for( int i = 0; tmp != NULL && i < aList.size; i++) {
		cout << i << " : ";
		in >> tmp->number;
		tmp = tmp->next;
	}
	return in;
}
