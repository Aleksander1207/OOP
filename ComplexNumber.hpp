#pragma once
class ComplexNumber
{
	private:
		double real;
		double img;
	public:
		ComplexNumber();
		ComplexNumber(double real, double img);
		void print();
		void read();
		double getReal() const;
		void setReal(double real);
		double getImg() const;
		void setImg(double img);
		void add(const ComplexNumber &w);
		void subtract(const ComplexNumber &w);
		void multiply(const ComplexNumber &w);
		void divide(const ComplexNumber &w);
};



