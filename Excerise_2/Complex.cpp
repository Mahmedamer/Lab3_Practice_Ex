#include"Complex.h"
#include<iostream>
using namespace std;

Complex::Complex(double r , double i) {
	real = r;
	imag = i;
}

void Complex::setReal(double r){
	real = r;
}

void Complex::setImag(double i) {
	imag = i;
}

double Complex::getReal() {
	return real;
}

double Complex::getImag() {
	return imag;
}

void Complex::setValue(double r , double i) {
	setReal(r);
	setImag(i);
}

bool Complex::isReal() {
	return imag == 0 ? true : false;
}

bool Complex::isImaginary() {
	return real == 0 ? true : false;
}

void Complex::Add(Complex c) {
	this->real += c.real;
	this->imag += c.imag;
}

void Complex::Print()
{
	cout << "( " << real << " , " << imag << " )" << endl;
}