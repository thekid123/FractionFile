/*************************************************************************
    Blessing Alagba
    v223e376
	Program 3
*/

#include <iostream>
#include "fraction.hpp"

using namespace std;

int main()
{
	//declaring object
    Fraction a;
    Fraction b;
    int option;

	//shows a menu for the user to choose from
    cout << "Begin: " << endl;
    cout << "Choose operation to compute: " << endl;
    cout << "1. Addition " << endl;
    cout << "2. Subtraction " << endl;
    cout << "3. Multiplication " << endl;
    cout << "4. Division " << endl;
    cout << "5. Reduce Fraction (Simplify) " << endl;
    cout << "6. Decimal Equvalent " << endl;
    cout << "7. Exit Program " << endl;

    //whats chosen is stored in option
    cin >> option;

	//exits the program when 7 is chosen
    if(option == 7)
    {
        return 0;
    }

	//when 5 is chosen it reduces the fraction and when 6 is chosen it finds the decimal equivalent
    if(option == 5 || option == 6)
    {
        cout << "Enter Fraction: " << endl;
        cin >> a;
    }
    else
    {
        cout << "Enter First Fraction: " << endl;
        cin >> a;
        cout << "Enter Second Fraction: " << endl;
        cin >> b;

    }

	//the answers to be stored under result
    Fraction result;

	//using a switch statement for the different options and implementing their roles when chosen
    switch(option)
    {
    case 1: cout << "Addition: " << endl;
        result = a + b;
        break;

    case 2: cout << "Subtraction: " << endl;
        result = a - b;
        break;

    case 3: cout << "Multiplication: " << endl;
        result = a * b;
        break;

    case 4: cout << "Division: " << endl;
        result = a / b;
        break;

    case 5: cout << "Reduce Fraction: " << endl;
        a.simplify();
        break;

    case 6: cout << "Decimal equvalent: " << endl;
        a.dec_equiv();
        break;

    default:
        cout << "Invalid choice " << endl;
        break;
    }


    if (option != 5 && option != 6)
        cout << "result = " << result << endl;

    return 0;
}
