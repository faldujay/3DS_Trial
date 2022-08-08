#include "Cylinder.h"

extern const double PI;  //define in "Circle.cpp"

Cylinder::Cylinder(double r, double h, int x, int y) :Circle(r,x,y) {
	setHeight(h);
}

void Cylinder::setHeight(double h) {
	height = (h > 0) ? h : 0;
}

double Cylinder::getHeight() const {
	return height;
}

double Cylinder::calculate_area() const {
	return 2 * Circle::calculate_area() + 2 * PI * radius * height;
}

double Cylinder::calculate_volume() const {
	return Circle::calculate_area()* height;
}

ostream& operator<<(ostream& out, const Cylinder& c) {
	out << static_cast <Circle>(c)
		<< " : Height = " << c.height
		<< "\nArea is " << c.calculate_area() << "\nvolume is " << c.calculate_volume() << endl;
	return out;
}

void Cylinder::print() const {
	Circle::print();
	cout << "Height is " << height << endl;
}
