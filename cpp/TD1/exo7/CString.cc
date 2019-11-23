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
	this->chaine = new char[strlen(chaine_bis) + 1];
	strcpy(this->chaine, chaine_bis);
	nbrChaine++;
}

CString::CString(const char caractere) {
	this->chaine = new char[2];
	this->chaine[0] = caractere;
	this->chaine[1] = '\0';
	nbrChaine++;
}

CString::CString(CString &s) {
	this->chaine = new char[s.getSize() + 1];
	this->change(s.getString());
}

const int CString::getSize() {
	return strlen(this->chaine);
}

const int CString::nbrChaines() {
	return nbrChaine;
}

const char* CString::getString() {
	return this->chaine;
}

void CString::change(const char* chaine_bis) {
	delete[]this->chaine;
	this->chaine = new char[strlen(chaine_bis)];
	strcpy(this->chaine, chaine_bis);
}

CString& CString::operator=(CString& src) {
	this->change(src.getString());
	return *this;
}

CString& CString::plus(char carac) {
	int number = strlen(this->chaine)+2;
	char* tmp = new char[number];
	
	for(int i = 0; i < number-2; i++) {
		tmp[i] = this->chaine[i];
	}
	tmp[number - 2] = 'w';
	tmp[number - 1] = '\0';
	
	this->change(tmp);
	return *this;
}

char CString::getChar(int number) {
	if(number > strlen(this->chaine)) {
		return this->chaine[0];
	}
	return this->chaine[number];
}

bool CString::plusGrandQue(CString& s) {
	if(strcmp(this->chaine, s.getString()) <= 0) {
		return true;
	}
	return false;
}

bool CString::infOuEgale(CString& s) {
	if(strcmp(this->chaine, s.getString()) > 0) {
		return true;
	}
	return false;
}

CString& CString::plusGrand(CString& s) {
	if(this->plusGrandQue(s)) {
		return *this;
	}
	return s;
}

CString::~CString() {
	nbrChaine--;
	delete[]chaine;
}
