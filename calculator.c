#include <iostream>
#include "cs50.h"

using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    num1 = get_int();

    cout << "Enter second number: ";
    num2 = get_int();

    cout << "Enter operation (+, -, *, /): ";
    op = get_char();

    switch(op)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 == 0)
            {
                cout << "Error: Cannot divide by zero." << endl;
            }
            else
            {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
    }

    return 0;
}