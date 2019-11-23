#ifndef _Point_h
#define _Point_h
class Point {

	private:
		int x,y;
	
	public:
		Point();
		Point(const int a, const int b);
		Point(Point const& p);

		const int getX();
		const int getY();
		void setX(const int number);
		void setY(const int number);

		virtual void afficher();

		void cloner(const Point &p);

		~Point();
};
#endif
