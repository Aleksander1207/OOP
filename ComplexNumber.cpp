#include<iostream>
#include "ComplexNumber.hpp"

using namespace std;

ComplexNumber::ComplexNumber() {
	this->real = 0;
	this->img = 0;
}

ComplexNumber::ComplexNumber(double real, double img) {
	this->real = real;
	this->img = img;
}


void ComplexNumber::print() {
	cout << this->real << " " << this->img << "i" << endl;
}

void ComplexNumber::read() {
	cout << "Insert the real part: ";
	cin >> this->real;
	cout << "Insert the imaginary part: ";
	cin >> this->img;
}

double ComplexNumber::getReal() const {
	return this->real;
}

void ComplexNumber::setReal(double real) {
	this->real = real;
}

double ComplexNumber::getImg() const {
	return this->img;
}

void ComplexNumber::setImg(double img) {
	this->img = img;
}

void ComplexNumber::add(const ComplexNumber& w) {
	this->setReal(this->getReal() + w.getReal());
	this->setImg(this->getImg() + w.getImg());
}

void ComplexNumber::subtract(const ComplexNumber& w) {
	this->setReal(this->getReal() - w.getReal());
	this->setImg(this->getImg() - w.getImg());
}

void ComplexNumber::multiply(const ComplexNumber& w) {
	double initialReal = this->getReal();
	double initialImg = this->getImg();
	this->setReal(this->getReal() * w.getReal() - this->getImg() * w.getImg());
	this->setImg(initialReal * w.getImg() + initialImg * w.getReal());
}

void ComplexNumber::divide(const ComplexNumber& w) {
	double initialReal = this->getReal();
	double initialImg = this->getImg();
	double denominator = w.getReal() * w.getReal() + (w.getImg() * w.getImg());
	this->setReal((initialReal * w.getReal() + (initialImg * w.getImg())) / denominator);
	this->setImg(((initialImg * w.getReal() - w.getImg() * initialReal)) / denominator);
}