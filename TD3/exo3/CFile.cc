#include "CList.h"
#include "CFile.h"

CFile& CFile::operator>(int& value){
	if(head == NULL) {
		cout << "File vide" << endl;
		exit(1);
	}
	else {
		node* tmp = head->next;
		if(tmp == NULL) {
			value = head->value;
			head = NULL;
			delete tmp;
			size--;
			return *this;
		}
		else {
			node* aux = tmp;
			while(tmp->next != NULL) {
				aux = tmp;
				tmp = tmp->next;
			}
			value = tmp->value;
			aux->next = NULL;
			size--;
			return *this;
		}
	}
}
