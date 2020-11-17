
#include "Circle.h" // Don't forget to read "Circle.h" under "Header Files" folder of the project

#include <iostream>
using namespace std;

//Circle Methods Definition (Circle Implementation) 
//--------------------------------------------------
//Notice how the function header is written


//Initializes the circle state
// must be called before any other operation.
// Initailaizes all Circle data members
// The default is that circle cener is (1,1) and rad  is 2
void Circle::init()
{
	radius = 2.0;
	x = 1;
	y = 1;
}

//update circle center point.
void Circle::changeCenter(double x, double b)
{
	// The "this" pointer is passed implicitly to each member function of a class
	// if the function variable name is the same as the class member variable name, 
	// then to differentiate between the two variable, use the "this" pointer.
	// Also the "this" pointer is used when we want to return a reference to the current object
	// e.g. return this.
	// Q: What might happen if the following line is written x=x instead of this->x=x? 
	this->x = x;	//using "this" pointer
	y = b;			//without "this" pointer
}

//update Circle radius to the newRad value
//Note: newRad should be >= zero
void Circle::setRadius(double newRad)
{
	if (newRad < 0)
		radius = 2; //default radius
	else
		radius = newRad;
}

//Calculate and return circle perimeter
double Circle::calcPerimeter()
{
	return 2 * 3.14 * radius;
}

void Circle::printCircleData()
{
	cout << "\nCircle Data:\n";
	cout << "Center = (" << x << "," << y << ") Radius = " << radius << endl;
	cout << "Perimeter = " << calcPerimeter() << endl;
	cout << "Area = " << calcArea() << endl;
	if (isPointCircle())
	{
		cout << "This is a Point Circle" << endl;
	}
	else 
	{
		cout << "This is NOT a Point Circle" << endl;
	}
}


double Circle::calcArea() {
	return radius * radius * (22 / 7);
}

bool Circle::isPointCircle() {
	if (radius == 0)
	{
		return true;
	}
	return false;
}
