#include "fraction.hpp"

double Fraction::gcd(int n, int d)
{
    if (d == 0)
    {
        return n;
    }
    else
    {
        return gcd(d, n % d);
    }
}

Fraction::Fraction()
{
    numerator = 1;
    denominator = 1;
}

Fraction::Fraction(int n, int d)
{
    numerator = n;
    denominator = d;
    simplify();
}

void Fraction::simplify()
{
    double factor = gcd(numerator, denominator);
    numerator = numerator / static_cast<double>(factor);
    denominator = denominator / static_cast<double>(factor);

}
//Fraction::Fraction(double first, double second)
//{
//    double factor = Fraction::gcd(first, second);
//    numerator = first / factor;
//    denominator = second / factor;
//}

//Fraction& Fraction operator = (const Fraction& lhs)
//{
//    numerator = lhs.numerator;
//    denominator = lhs.denominator;
//    return *this;
//}

Fraction operator+ (const Fraction& lhs, const Fraction& rhs)
{
    int numerator = lhs.numerator * rhs.denominator + rhs.numerator * lhs.denominator;
    int denominator = lhs.denominator * rhs.denominator;
    int factor = Fraction::gcd(numerator, denominator);
    return Fraction (numerator/factor, denominator/factor);
}

Fraction operator- (const Fraction& lhs, const Fraction& rhs)
{
    int numerator = lhs.numerator * rhs.denominator - rhs.numerator * lhs.denominator;
    int denominator = lhs.denominator * rhs.denominator;
    int factor = Fraction::gcd(numerator, denominator);
    return Fraction (numerator / factor, denominator / factor);
}

Fraction operator* (const Fraction& lhs, const Fraction& rhs)
{
    int numerator = lhs.numerator * rhs.numerator;
    int denominator = lhs.denominator * rhs.denominator;
    int factor = Fraction::gcd(numerator, denominator);
    return Fraction (numerator / factor, denominator / factor);
}

Fraction operator/ (const Fraction& lhs, const Fraction& rhs)
{
    int numerator = lhs.numerator * rhs.denominator;
    int denominator = lhs.denominator * rhs.numerator;
    int factor = Fraction::gcd(numerator, denominator);
    return Fraction (numerator / factor, denominator / factor);
}

std::ostream& operator << (std::ostream& output, Fraction& a)
{
    if(a.denominator == 1)
    {
        output << a.numerator;
    }
    else
    {
        output << a.numerator << "/" << a.denominator;
    }
    return output;
}

std::istream& operator >> (std::istream& input, Fraction& i)
{
    std::cout << "nominator: ";
    std::cin >> i.numerator;
    std::cout << "denominator: ";
    std::cin >> i.denominator;

    int factor = Fraction::gcd(i.numerator, i.denominator);
    i.numerator /= factor;
    i.denominator /= factor;

    return input;
}
