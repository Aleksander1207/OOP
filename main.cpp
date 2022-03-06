#include<iostream>
#include "ComplexNumber.hpp"
using namespace std;

ComplexNumber add(const ComplexNumber &w1, const ComplexNumber &w2) {
	ComplexNumber sum;
	sum.setReal(w1.getReal() + w2.getReal());
	sum.setImg(w1.getImg() + w2.getImg());

	return sum;
}

ComplexNumber subtract(const ComplexNumber& w1, const ComplexNumber& w2) {
	ComplexNumber diff;
	diff.setReal(w1.getReal() - w2.getReal());
	diff.setImg(w1.getImg() - w2.getImg());

	return diff;
}

ComplexNumber multiply(const ComplexNumber& w1, const ComplexNumber& w2) {
	ComplexNumber result;
	result.setReal(w1.getReal() * w2.getReal() - w1.getImg() * w2.getImg());
	result.setImg(w1.getReal() * w2.getImg() + w1.getImg() * w2.getReal());

	return result;
}

ComplexNumber divide(const ComplexNumber& w1, const ComplexNumber& w2) {
	ComplexNumber result;
	double denominator = w2.getReal() * w2.getReal() + (w2.getImg() * w2.getImg());
	result.setReal((w1.getReal() * w2.getReal() + (w1.getImg() * w2.getImg())) / denominator);
	result.setImg(((w1.getImg() * w2.getReal() - w2.getImg() * w1.getReal())) / denominator);

	return result;
}

ComplexNumber avg(ComplexNumber* arr, size_t n) {
	ComplexNumber res;
	for (size_t i = 0; i < n; i++) {
		res = add(res, arr[i]);
	}

	res.setReal(res.getReal() / n);
	res.setImg(res.getImg() / n);

	return res;
}


int main() {
	ComplexNumber c(5,-2);
	c.divide(ComplexNumber(-2, 3));
	c.print();
	return 0;
}