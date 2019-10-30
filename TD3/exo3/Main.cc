#include <iostream>
using namespace std;
#include "CList.h"
#include "CPile.h"
#include "CFile.h"

int main(){ 
	CPile pile;
	List* ptList;
	CFile file;

	ptList = &file;
	* ptList < 98 < 1 < 78;  //empiler deux valeurs dans la file 
	cout << * ptList; 
	int i = 5; 
	(* ptList) > i;      //récupérer une valeur de la file dans i 
	cout << * ptList << " i=" << i << endl;
	
	ptList = &pile; 
	* ptList < 0 < 1 < 4;  //empiler deux valeurs dans la pile 
	cout << *ptList; 
	(* ptList) > i;      //récupérer une valeur de la pile dans i 
	cout << * ptList << " i=" << i << endl;

	return 0;
} 
