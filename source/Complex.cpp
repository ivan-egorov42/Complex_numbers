#include <iostream>
#include <cmath>
#include "../includes/Complex.h"

Complex::Complex(): re(0), im(0) {}

Complex::Complex(double other_re, double other_im): re(other_re), im(other_im) {}

Complex::Complex(const Complex & num)
{
	re = num.re;
	im = num.im;
}

Complex::~Complex() {}

double Complex::abs() const
{
	return std::sqrt(re*re + im*im);
}

Complex Complex::operator+ (const Complex & num) const
{
	return Complex{re + num.re, im + num.im};
}

Complex Complex::operator- (const Complex & num) const
{
	return Complex{re - num.re, im - num.im};
}

Complex Complex::operator* (const Complex & num) const
{
	return Complex{re*num.re - im*num.im, re*num.im + im*num.re};
}

Complex Complex::operator* (double c) const
{
	return Complex{c*re, c*im};
}

Complex Complex::operator/ (const Complex & num) const
{
	return Complex{(re*num.re + im*num.im)/(num.re*num.re + num.im*num.im), 
				(num.re*im - re*num.im)/(num.re*num.re + num.im*num.im)};
}

Complex & Complex::operator+= (const Complex & num)
{
	re += num.re;
	im += num.im;

	return *this;
}

Complex & Complex::operator-= (const Complex & num)
{
	re -= num.re;
	im -= num.im;

	return *this;
}

Complex & Complex::operator*= (const Complex & num)
{
	*this = (*this) * num;
	return *this;
}

Complex & Complex::operator/= (const Complex & num)
{
	*this = (*this)/num;
	return *this;
}

Complex & Complex::operator/= (double c)
{
	this->re/=c;
	this->im/=c;

	return *this;
}

Complex Complex::operator- () const
{
	return Complex{-re, -im};
}

Complex & Complex::operator= (const Complex & num)
{
	re = num.re;
	im = num.im;

	return *this;
}

Complex Complex::operator! () const
{
	return Complex{re, -im};
}

void Complex::print()
{
	std::cout << "Complex number is ";
	std::cout << "Re: " << re <<", "<< "Im: " << im << std::endl;
}

bool Complex::operator== (const Complex & num) const
{	
	if ((fabs(re - num.re) < 1e-6) && (fabs(im - num.im) < 1e-6))
		return true;

	else {return false;}
}

bool Complex::operator!= (const Complex & num) const
{
	if (fabs(re - num.re) < 1e-9 && fabs(im - num.im) < 1e-9)
		return false;

	else {return true;}
}

Complex operator* (double c, const Complex& num)
{
	return num * c;
}