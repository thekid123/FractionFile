/*************************************************************************
    Blessing Alagba
    v223e376
	Program 3

    Description: This program implements a Fraction class it consists of the numerator and denominator
                 It asks the user to enter two fractions and it calculates 7 options which is Add, Subtract,
                 Multiplication, Division, Reduce the fraction and to find the decimal equvalent. It exits
                 the program if a certain condition is met.

    Pseudo code:-
    class Name : Fraction
    Data:
		numerator - stores the numerator value
		denominator - stores the denominator value
	Mutator Function:
		simplify - it simplifies the fraction

*/


#ifndef Fraction_hpp
#define Fraction_hpp

#include <iostream>
using namespace std;

class Fraction
{
    int numerator;
    int denominator;

public:
    //default constructor
    Fraction();

    //constructor
    Fraction(int n, int d);

	//Using the friend function
    friend Fraction operator+ (const Fraction&, const Fraction&);
    friend Fraction operator- (const Fraction&, const Fraction&);
    friend Fraction operator* (const Fraction&, const Fraction&);
    friend Fraction operator/ (const Fraction&, const Fraction&);

    friend ostream& operator << (ostream& output, Fraction&);
    friend istream& operator >> (istream& input, Fraction&);

    //finding the decimal equvalent
    double dec_equiv();

    //finding the greatest common divisor
    double static gcd(int x, int y);

    //Mutator Function (simplifies the fraction)
	void simplify();
};

#endif
