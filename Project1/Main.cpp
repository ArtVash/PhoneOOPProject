#include "Point2D.h"

int main() {

	Point2D p1;
	Point2D p2;
	Point2D p3;

	p3 = p1 + p2;
	cout << "After + : " << p3.getInfo() << endl;

	p3 = p1 - p2;
	cout << "After - : " << p3.getInfo() << endl;

	int n = p1 * p2;
	cout << "After * : " << n << endl;



	cout << p1.getInfo() << endl;
	cout << p2.getInfo() << endl;
	cout << p3.getInfo() << endl;

	return 0;

}