#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double number1, number2;
    string operation;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter operator (+ , _, -, * , ^): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> number2;

    if (operation == "+")
    {
        cout << "Answer is: " << number1 + number2;
    }
    if (operation == "-")
    {
        cout << "Answer is: " << number1 - number2;
    }
    if (operation == "/")
    {
        cout << "Answer is: " << number1 / number2;
    }
    if (operation == "^")
    {
        cout << "Answer is: " << pow(number1,number2);
    }
    else
    {
        cout << "Syntax Error: ";
    }
    
}


