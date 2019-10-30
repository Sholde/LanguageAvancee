#ifndef _Form_h
#define _Form_h
#include "Point.h"
class Form {
	private:
		Point centre;

	public:
		Form();
		Form(int x, int y);
		~Form();
		Point& getCentre();
		virtual void afficher() = 0;
		void deplacer(int = 0, int = 0);
};
#endif
