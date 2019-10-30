#include "SFML/Graphics.hpp"
using namespace sf;

#define w 500
#define h 500

int main() {
	RenderWindow window(VideoMode(w, h), "test");

	while(window.isOpen()) {}
	
	return 0;
}
