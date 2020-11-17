#pragma once

class Complex
{
private:
	double real, imag;

public:
	Complex(double r = 0 ,double i = 0);
	void setReal(double r);
	void setImag(double i);
	double getReal();
	double getImag();
	void setValue(double r = 0, double i = 0);
	bool isReal();
	bool isImaginary();
	void Add(Complex c);
	void Print();
};
