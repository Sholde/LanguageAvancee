#include "Definition.h"

Definition::Definition(Definition &a) {
	this->mot.change(a.getClef());
	this->def.change(a.getDef());
}

const char* Definition::getClef() {
	return this->mot.getString();
}

const char* Definition::getDef() {
	return this->def.getString();
}
