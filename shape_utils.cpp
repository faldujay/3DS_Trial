#include "Shape.h"
#include <iostream>
using namespace std;

void virtualViaPointer(const Shape* basptr) {
	basptr->drawShape();
	basptr->print();
	cout << "Area is : " << basptr->calculate_area() << endl;
	cout << "Volume is : " << basptr->calculate_volume() << endl;
}

void virtualViaReference(const Shape& baseClassRef) {
	baseClassRef.drawShape();
	baseClassRef.print();
	cout << "Area is : " << baseClassRef.calculate_area() << endl;
	cout << "Volume is : " << baseClassRef.calculate_volume() << endl;
}