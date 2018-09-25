
#ifndef Fraction_hpp
#define Fraction_hpp

#include <iostream>
using namespace std;

class Fraction
{
    int numerator;
    int denominator;
    double decimal_equv;

public:
    Fraction();
    Fraction(int n, int d);
    //Fraction(int first, int second);

    //Fraction & operator = (const Fraction &);

    friend Fraction operator+ (const Fraction&, const Fraction&);
    friend Fraction operator- (const Fraction&, const Fraction&);
    friend Fraction operator* (const Fraction&, const Fraction&);
    friend Fraction operator/ (const Fraction&, const Fraction&);

    friend ostream& operator << (ostream& output, Fraction&);
    friend istream& operator >> (istream& input, Fraction&);

    double static gcd(int x, int y);
    void simplify();
};

#endif
