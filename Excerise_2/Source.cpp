#include<iostream>
#include"Complex.h"
using namespace std;

// Global Functions Prototype

Complex Add(Complex C1, Complex C2);

// Main Function

int main() 
{
	Complex def, C1(12 , 2), C2 , C3;
	
	C2.setValue(5, 7);
	C3 = Add(C1, C2);

	cout << "Default : ";
	def.Print();

	cout << "Initializing : ";
	C1.Print();

	cout << "Setting Values : ";
	C2.Print();

	cout << "Adding using global function : ";
	C3.Print();

	C2.Add(C1);

	cout << "Adding using member function : ";
	C2.Print();

	return 0;
}

// Global Functions Definations

Complex Add(Complex C1, Complex C2)
{
	Complex Result;
	Result.setReal(C1.getReal() + C2.getReal());
	Result.setImag(C1.getImag() + C2.getImag());
	return Result;
}
