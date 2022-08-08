#pragma once
#include "Point.h"


class Circle :public Point {

	friend ostream& operator<<(ostream&, const Circle&);

public:
	Circle(double = 0, int = 0, int = 0);
	void setRadiudus(double r);
	double getRedius() const;
	virtual double calculate_area() const;
	virtual void drawShape() const { cout << "Point : "; }
	virtual void print() const;

protected:
	double radius;
};