#include "Circle.h"

extern const double PI = 3.14159;

Circle::Circle(double r, int x, int y) :Point(x, y) {
	setRadiudus(r);
}

void Circle::setRadiudus(double r) {
	radius = (r > 0) ? r : 0;
}

double Circle::getRedius() const {
	return radius;
}

double Circle::calculate_area() const {
	return PI * radius * radius;
}

ostream& operator<<(ostream& out, const Circle& c) {
	out << "Area of circle with Center at " << static_cast<Point>(c)\
		<< " and Radius as " << c.radius << " is " << c.calculate_area();
	return out;
}

void Circle::print() const {
	Point::print();
	cout << "Radius as " << radius << endl;
}


// just for understanding git.

void foo() {
	cout << "For git\n";
}