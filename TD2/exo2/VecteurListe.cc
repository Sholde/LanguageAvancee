#include <iostream>
using namespace std;

#include "VecteurListe.h"

Vecteur::Vecteur():vect() {}

Vecteur::Vecteur(const int number):vect(number) {}

Vecteur::Vecteur(Vecteur const& v) {
	*this= v;
}

Vecteur::~Vecteur() {
	cout << "Vecteur: appel au destructeur" << endl;
}

Vecteur& Vecteur::operator=(Vecteur const&v) {
	this->vect = v.vect;
	return *this;
}

int& Vecteur::operator[](const int number) {
	return this->vect[number];
}

bool Vecteur::operator==(Vecteur const& v) {
	return this->vect == v.vect;
}

bool Vecteur::operator!=(Vecteur const& v) {
	return !(*this == v);
}

Vecteur Vecteur::operator+(Vecteur const&v) {
	Vecteur res;
	res.vect = this->vect + v.vect;
	return res;
}

ostream& operator<<(ostream &o, Vecteur &v) {
	o << "Vecteur:" << endl;
	o << v.vect;
	return o;
}

istream& operator>>(istream &in, Vecteur &v) {
	in >> v.vect;
	return in;
}
