#include <iostream>
using namespace std;
#include "CList.h"
#include "CPile.h"
#include "CFile.h"

int main(){ 
	CPile<float> pile;
	List<float>* ptList;
	CFile<float> file;

	ptList = &file;
	* ptList < 98.98 < 1.0 < 78.0;  //empiler deux valeurs dans la file 
	cout << * ptList; 
	float i = 5.0; 
	(* ptList) > i;      //récupérer une valeur de la file dans i 
	cout << * ptList << " i=" << i << endl;
	
	ptList = &pile; 
	* ptList < 0.0 < 1.1 < 4.0;  //empiler deux valeurs dans la pile 
	cout << *ptList; 
	(* ptList) > i;      //récupérer une valeur de la pile dans i 
	cout << * ptList << " i=" << i << endl;

	return 0;
} 
