// shape.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Shape.h"
#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"

int main()
{
    Point p1(2, 4);
    Circle c1(1.5, 3, 5);
    Cylinder cy1(2.5, 3.5, 4, 5);

    p1.drawShape();
    p1.print(); 

    
    cout << "Area is : " << p1.calculate_area()<<endl;
    cout << "Volume is : " << p1.calculate_volume() << endl << endl;


    c1.drawShape();
    c1.print();


    cout << "Area is : " << c1.calculate_area() << endl;
    cout << "Volume is : " << c1.calculate_volume() << endl << endl;

    cy1.drawShape();
    cy1.print();


    cout << "Area is : " << cy1.calculate_area() << endl;
    cout << "Volume is : " << cy1.calculate_volume() << endl << endl;

    // same things can be done by creating array of objects using pointer 

    Shape* shape[3] = { &p1,&c1,&cy1 };
    
    cout << "-------------------------------------------------" << endl;
    cout << "Via Pointer : " << endl;
    cout << "-------------------------------------------------" << endl << endl;

    for (int i = 0; i < 3; i++) {
        virtualViaPointer(shape[i]);
        cout << endl;
    }

    // also same thing can be dony by using refrence

    cout << "-------------------------------------------------" << endl;
    cout << "Via Refrence : " << endl;
    cout << "-------------------------------------------------" << endl << endl;

    for (int i = 0; i < 3; i++) {
        virtualViaReference(*shape[i]);
        cout << endl;
    }

    /*
    Point *pointptr = 0, p(30,60);
    Circle *circleptr =0, c(20, 30, 5);
    Cylinder cy1(10, 10, 10, 10);

    cout << "Point p : " << p << endl; 
    cout << "Circle c: " << c << endl;
    cout << "Cylinder cy1 : " << cy1 << endl;
   
    
    pointptr = &c;
    cout << " center of Circle : " << *pointptr << endl;

    //-------------------------------------------------------------------------

    circleptr = static_cast<Circle*>(pointptr);
    cout << "\nCircle c (via *circleptr) : \n" << *circleptr
        << "\n Area of c (via circleptr) : "
        << circleptr->calculate_area() << endl;

    pointptr = &p;

    circleptr = static_cast<Circle*>(pointptr);
    cout << "\nPoint p (via *circleptr) : \n" << *circleptr
        <<"\nArea of object circleptr point to : "
        << circleptr->calculate_area() << endl;

    */
   
    
    return 0;
}


