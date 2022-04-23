#ifndef COMPLEX_HEADER_INCLUDED
#define COMPLEX_HEADER_INCLUDED

class Complex 
{
public:
	double re, im;

    Complex();
    Complex(double re, double im);
    Complex(const Complex & num);
    ~Complex();
    
    double abs() const;
    Complex operator+ (const Complex & num) const;
    Complex operator- (const Complex & num) const;
    Complex operator* (const Complex & num) const;
    Complex operator* (double c) const;
    Complex operator/ (const Complex & num) const;
    Complex & operator+= (const Complex & num);
    Complex & operator-= (const Complex & num);
    Complex & operator*= (const Complex & num);
    Complex & operator/= (const Complex & num);
    Complex & operator/= (double c);

    bool operator== (const Complex & num) const;
    bool operator!= (const Complex & num) const;
    Complex & operator= (const Complex & num);
    Complex operator! () const;
    Complex operator- () const;

    void print();
};

Complex operator* (double c, const Complex& num);

#endif //COMPLEX_HEADER_INCLUDED