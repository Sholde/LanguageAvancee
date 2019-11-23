#ifndef _PointColor_h
#define _PointColor_h
#include <string>
using namespace std;
#include "Point.h"

class PointColor: public Point{
	private:
		string color;

	public:
		PointColor(const int xx = 0, const int yy = 0, string color = "");
		PointColor(Point const& p, string color = "");
		PointColor(PointColor const& p);
		~PointColor() {};

		void afficher();
};
#endif
