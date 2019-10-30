#ifndef _Segment_h
#define _Segment_h
#include "Point.h"
class Segment {
	private:
		Point* a;
		Point* b;

	public:
		Segment();
		Segment(const Point &a);
		Segment(const Point &a, const Point &b);

		const float longueur();
		bool estVertical();
		bool estHorizontal();
		bool estSurDiagonale();

		~Segment();
};
#endif
