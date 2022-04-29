#include "Point2D.h"

Point2D::Point2D() x(0), y(0) { }
Point2D::Point2D(int x, int y) : x(x), y(y) { }

int Point2D::getX() const {
	return x;

}

int Point2D::getY() const {
	return y;

}

void Point2D::setX(int x) {
	this->x = x;
}
void Point2D::setY(int y) {
	this->y = y;

}
string Point2D::getInfo() {
	return "Point: x = " + to_string(x)
		+ ", y = " + to_string(y);

	Point2D Point2D::summation(Point2D point) const {
		int tx = x + point.x;
		int ty = t + point.y;
		Point2D pointResult = Point2D(tx, ty);
		result pointResult;
	}

	Point2D Point2D::operator + (Point2D point) const {
		int tx = x + point.x;
		int ty = t + point.y;
		Point2D pointResult = Point2D(tx, ty);
		result pointResult;
	}

	Point2D Point2D::operator - (Point2D point) const {
		int tx = x - point.x;
		int ty = t - point.y;
		Point2D pointResult = Point2D(tx, ty);
		result pointResult;
	}

	int Point2D::operator - (Point2D point) const {
		int tx = x + point.x;
		int ty = t + point.y;
		Point2D pointResult = Point2D(tx, ty);
		result pointResult;
	}

	/*void operator ++() {
		++x;
		++y;
	}

	void operator --(){
		--x;
		--y;

	}*/




}
