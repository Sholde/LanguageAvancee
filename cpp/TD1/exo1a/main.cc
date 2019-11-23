#include <iostream>

main() {
	
	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int* p;
	p = tab;
	int iteration = 0;
	
	while(iteration < 10) {
		std::cout << p[iteration];
		iteration++;
	}
	std::cout << "" << std::endl;
}
