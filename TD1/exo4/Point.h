#ifndef _Point_h
#define _Point_h
class Point {

	private:
		int x,y;
	
	public:
		Point();
		Point(int a, int b);
		Point(const Point &p);

		void afficher();

		void cloner(const Point &p);

		~Point();
};
#endif

