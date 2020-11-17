#include "Circle.h" 
#include <iostream>
using namespace std;

// in this example we learn the concept of "Reusability " and "Modularity" in classes.
// the reusability comes from separation of different unrelated parts of code from each other, while any changes to one part doesnt affect the others.
// this separation enable users to use parts of codes in other projects also.
// Modularity is the concept of making every  part of the code responsible of some specific functionality .
// this concept enables us to devide the work between co-workers and track bugs and errors more easily.
// these concepts are applicable in classes where user "main" need to know only the header of class functions and not their implementation.
// we usually gather the class defination and function headers to a header file like Circle.h file heare under the "Header Files " folder in the left.
// we put the class implementation to a cpp file like Circle.cpp .
// note how we include the header file  Ciurcle.h   in the main and Circle.cpp files in the first line.



//Circle User Code
//---------------

int main()
{
	//Create objects of Circle
	Circle Circ1, Circ2 , Circ3;

	//Initialize the Circle
	Circ1.init();
	Circ2.init();
	Circ3.init();

	//update data of Circ1
	Circ1.changeCenter(1, 1);
	Circ1.setRadius(10);

	//update data of Circ2
	Circ2.changeCenter(3, 4);
	Circ2.setRadius(2);

	//update data of Circ3
	Circ3.changeCenter(7, 8);
	Circ3.setRadius(0);

	cout << "Circle 1:";
	Circ1.printCircleData();

	cout << "\nCircle 2:";
	Circ2.printCircleData();

	cout << "\nCircle 3:";
	Circ3.printCircleData();

	cout << "\nRatio = " << Circ1.calcArea() / Circ2.calcArea();

	return 0;
}


