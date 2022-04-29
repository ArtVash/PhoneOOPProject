#include "Header.h"

class Point2D {

private:
	int x;
	int y;

public:
	Point2D();
	Point2D(int x, int y);

	int getX() const;
	int getY() const;
	void getX(int x);
	void getY(int y);
	string getInfo();

	/*Point2D summatoin(Point2D point) const;*/

	Point2D operation + (Point2D point) const;
	Point2D operation - (Point2D point) const;
	int operation * (Point2D point) const;
	
	void operator ++();
	void operator --();

};

