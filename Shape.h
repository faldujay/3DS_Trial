#pragma once

class Shape {

public:
	virtual double calculate_area() const { return 0.0; }
	virtual double calculate_volume() const { return 0.0; }
	virtual void drawShape() const = 0;
	virtual void print() const = 0;

};

void virtualViaPointer(const Shape*);
void virtualViaReference(const Shape&);