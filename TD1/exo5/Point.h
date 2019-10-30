#ifndef _Point_h
#define _Point_h
class Point {

	private:
		int x,y;
	
	public:
		Point();
		Point(int a, int b);
		Point(const Point &p);

		const int get_x();
		const int get_y();

		void set_x(int number);
		void set_y(int number);

		void afficher();

		void cloner(const Point &p);

		~Point();
};
#endif
