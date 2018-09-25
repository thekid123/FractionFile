#include <iostream>
#include "fraction.hpp"

using namespace std;

int main()
{
    Fraction a;
    Fraction b;

    cout << "Begin: " << endl;
    cout << "Enter First Fraction: " << endl;
    cin >> a;
    cout << "Enter Second Fraction: " << endl;
    cin >> b;

    Fraction c;
    Fraction d(8,16);

    c = a + b;
    cout << c << endl;

    c = a - b;
    cout << c << endl;

    c = a * b;
    cout << c << endl;

    c = a / b;
    cout << c << endl;

    cout << d << endl;
}
