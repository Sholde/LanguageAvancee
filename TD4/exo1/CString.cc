#include <iostream>
using namespace std;
#include <string.h>

#include "CString.h"

int CString::nbrChaine = 0;

CString::CString() {
	this->chaine = new char[1];
	this->chaine[0] = '\0';
	nbrChaine++;
}

CString::CString(const char* chaine_bis) {
	this->size = strlen(chaine_bis) + 1;
	this->chaine = new char[this->size];
	strcpy(this->chaine, chaine_bis);
	nbrChaine++;
}

CString::CString(const char caractere) {
	this->size = 2;
	this->chaine = new char[2];
	this->chaine[0] = caractere;
	this->chaine[1] = '\0';
	nbrChaine++;
}

CString::CString(CString &s) {
	this->size = s.getSize() + 1;
	this->chaine = new char[this->size];
	this->change(s.getString());
}

const int CString::getSize() {
	return strlen(this->chaine);
}

const int CString::nbrChaines() {
	return nbrChaine;
}

char* CString::getString() {
	return this->chaine;
}

void CString::change(const char* chaine_bis) {
	delete[]this->chaine;
	this->chaine = new char[strlen(chaine_bis)];
	strcpy(this->chaine, chaine_bis);
}

CString& CString::operator=(CString const& src) {
	delete[]this->chaine;
	this->chaine = new char[strlen(src.chaine) + 1];
	strcpy(this->chaine, src.chaine);
	return *this;
}

CString operator+(CString const& cs1, CString const& cs2) {
	CString res;
	delete res.chaine;
	
	res.size = cs1.size + cs2.size + 1;
	res.chaine = new char[res.size];
	
	strcat(res.chaine, cs1.chaine);
	strcat(res.chaine, cs2.chaine);
	return res;
}

CString& CString::plus(char carac) {
	int number = strlen(this->chaine)+2;
	char* tmp = new char[number];
	
	for(int i = 0; i < number-2; i++) {
		tmp[i] = this->chaine[i];
	}
	tmp[number - 2] = carac;
	tmp[number - 1] = '\0';
	
	this->change(tmp);
	return *this;
}

char& CString::operator[](int number) {
	if(number > strlen(this->chaine)) {
		return this->chaine[0];
	}
	return this->chaine[number];
}

bool CString::operator>(CString& s) {
	if(strcmp(this->chaine, s.getString()) <= 0) {
		return true;
	}
	return false;
}

bool CString::operator<=(CString& s) {
	if(strcmp(this->chaine, s.getString()) > 0) {
		return true;
	}
	return false;
}

bool CString::operator<(CString& s) {
	if(strcmp(this->chaine, s.getString()) <= 0) {
		return true;
	}
	return false;
}

CString& CString::plusGrand(CString& s) {
	if(this->chaine > s.getString() < 0) {
		return *this;
	}
	else
		return s;
}

CString::~CString() {
	nbrChaine--;
	delete[]chaine;
}
