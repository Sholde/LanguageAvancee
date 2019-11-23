#ifndef _Segment_h
#define _Segment_h
#include "Form.h"
#include "Point.h"
class Segment : public Form {
	private:
		Point a;
		Point b;

	public:
		Segment();
		Segment(Point const& a);
		Segment(Point const& a, Point const& b);

		const float longueur();
		bool estVertical();
		bool estHorizontal();
		bool estSurDiagonale();

		void afficher();

		~Segment();
};
#endif
