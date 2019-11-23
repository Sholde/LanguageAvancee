#ifndef _CFile_h
#define _CFile_h
#include "CList.h"

template<typename T>
class CFile : public List<T> {
	public:
		CFile() {};
		~CFile() {};

		CFile<T>& operator>(T& value) {
			if(this->head == NULL) {
				cout << "File vide" << endl;
				exit(1);
			}
			else {
				node<T>* tmp = this->head->next;
				if(tmp == NULL) {
					value = this->head->value;
					this->head = NULL;
					delete tmp;
					this->size--;
					return *this;
				}
				else {
					node<T>* aux = tmp;
					while(tmp->next != NULL) {
						aux = tmp;
						tmp = tmp->next;
					}
					value = tmp->value;
					aux->next = NULL;
					this->size--;
					return *this;
				}
			}
		};
		
};
#endif
