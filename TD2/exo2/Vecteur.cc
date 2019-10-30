#include <iostream>
using namespace std;

#include "Vecteur.h"

Vecteur::Vecteur() {
	this->vect = 0;
	this->size = 0;
}

Vecteur::Vecteur(const int a) {
	this->size = a;
	this->vect = new int[this->size];
	for(int i = 0; i < this->size; i++)
		this->vect[i] = i;
}

Vecteur::Vecteur(Vecteur const& v) {
	this->size = v.size;
	this->vect = new int[this->size];
	*this = v;
}

Vecteur::~Vecteur() {
	cout << "Vecteur: appel au destructeur" << endl;
	delete this->vect;
}

Vecteur& Vecteur::operator=(Vecteur const&v) {
	delete this->vect;
	this->size = v.size;
	this->vect = new int[this->size];
	
	for(int i = 0; i < this->size; i++) {
		this->vect[i] = v.vect[i];
	}
	return *this;
}

Vecteur& Vecteur::operator +=(Vecteur const& v) {
	if(this->size == v.size) {
		for(int i = 0; i < this->size; i++) {
			this->vect[i] += v.vect[i];
		}
	}
	return *this;
}

Vecteur& Vecteur::operator +=(const int number) {
	for(int i = 0; i < this->size; i++) {
		this->vect[i] += number;
	}
	return *this;
}

Vecteur& Vecteur::operator -=(Vecteur const& v) {
	if(this->size == v.size) {
		for(int i = 0; i < this->size; i++) {
			this->vect[i] -= v.vect[i];
		}
	}
	return *this;
}

Vecteur& Vecteur::operator -=(const int number) {
	for(int i = 0; i < this->size; i++) {
		this->vect[i] -= number;
	}
	return *this;
}

int& Vecteur::operator[](const int number) {
	if( this->size > number && number >= 0) {
		return this->vect[number];
	}
	else
		exit(0); // exception
}

Vecteur& Vecteur::operator++() {
	for(int i = 0; i < this->size; i++) {
		this->vect[i]++;
	}
	return *this;
}

bool Vecteur::operator==(Vecteur const& v) {
	if(this->size != v.size)
		return false;

	for(int i = 0; i < this->size; i++) {
		if(this->vect[i] != v.vect[i])
			return false;
	}
	return true;
}

bool Vecteur::operator!=(Vecteur const& v) {
	return !(*this == v);
}

Vecteur operator+(Vecteur const&v1, Vecteur const&v2) {
	Vecteur res;
	if(v1.size != v2.size)
		exit(1);
	res.size = v1.size;
	res.vect = new int[res.size];
	for(int i = 0; i < res.size; i++) {
		res.vect[i] = v1.vect[i] + v2.vect[i];
	}
	return res;
}

ostream& operator<<(ostream &o, Vecteur &v) {
	o << "Vecteur:" << endl;
	for( int i = 0; i < v.size; i++) {
		o << "[" << v[i] << "]" << endl;
	}
	return o;
}

istream& operator>>(istream &in, Vecteur &v) {
	for(int i = 0; i < v.size; i++) {
		in >> v[i];
	}
	return in;
}
