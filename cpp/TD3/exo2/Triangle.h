#ifndef _Triangle_h
#define _Triangle_h
#include "Form.h"
#include "Point.h"
class Triangle : public Form {
	private:
		Point a;
		Point b;
		Point c;

	public:
		Triangle();
		Triangle(Point const& a);
		Triangle(Point const& a, Point const& b);
		Triangle(Point const& a, Point const& b, Point const& c);

		void afficher();
		void deplacer(const int xx = 0, const int yy = 0);

		~Triangle();
};
#endif
