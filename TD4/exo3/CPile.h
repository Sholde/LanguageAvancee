#ifndef _CPile_h
#define _CPile_h
#include "CList.h"

template<typename T>
class CPile : public List<T> {
	public:
		CPile() {};
		~CPile() {};

		CPile<T>& operator>(T& value) {
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
		};
};
#endif
