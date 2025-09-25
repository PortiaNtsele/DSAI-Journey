#include <iostream>
#include <string>
#include <cmath>    // for pow and sqrt
using namespace std;

// Function declarations
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return b != 0 ? a / b : 0; }
double power(double a, double b) { return pow(a, b); }
double squareRoot(double a) { return sqrt(a); }
unsigned long long factorial(int n) {
    if (n < 0) return 0; // Error for negative numbers
    unsigned long long fact = 1;
    for(int i=1; i<=n; i++) fact *= i;
    return fact;
}
double percentage(double a) { return a / 100.0; }

int main() {
    cout << "============================\n";
    cout << "    CLI Calculator Version 1\n";
    cout << "============================\n";

    string continueCalc;
    double firstNumber, secondNumber;
    int operationChoice;

    do {
        cout << "Choose an operation:\n";
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Power (x^y)\n6. Square Root\n7. Factorial\n8. Percentage\n";
        cout << "Enter choice (1-8): ";
        cin >> operationChoice;

        switch (operationChoice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> firstNumber >> secondNumber;
                cout << firstNumber << " + " << secondNumber << " = " << add(firstNumber, secondNumber) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> firstNumber >> secondNumber;
                cout << firstNumber << " - " << secondNumber << " = " << subtract(firstNumber, secondNumber) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> firstNumber >> secondNumber;
                cout << firstNumber << " * " << secondNumber << " = " << multiply(firstNumber, secondNumber) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> firstNumber >> secondNumber;
                if(secondNumber != 0)
                    cout << firstNumber << " / " << secondNumber << " = " << divide(firstNumber, secondNumber) << endl;
                else
                    cout << "Error! Division by zero." << endl;
                break;
            case 5:
                cout << "Enter the base:";
                cin >> firstNumber;
                cout << "Enter the exponent :";
                cin >> secondNumber;
                cout << firstNumber << " ^ " << secondNumber << " = " << power(firstNumber, secondNumber) << endl;
                break;
            case 6:
                cout << "Enter the number to find the square root: ";
                cin >> firstNumber;
                cout << "Square root of " << firstNumber << " = " << squareRoot(firstNumber) << endl;
                break;
            case 7:
                int factorialInput;
                cout << "Enter an integer for factorial: ";
                cin >> factorialInput;
                if(factorialInput < 0)
                    cout << "Error! Factorial of negative number doesn't exist." << endl;
                else
                    cout << factorialInput << "! = " << factorial(factorialInput) << endl;
                break;
            case 8:
                cout << "Enter the number to convert to percentage: ";
                cin >> firstNumber;
                cout << firstNumber << "% = " << percentage(firstNumber) << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "Do you want to continue calculating? (Yes/No): ";
        cin >> continueCalc;

    } while(continueCalc == "Yes" || continueCalc == "yes");

    cout << "Thank you for using CLI Calculator Version 1!" << endl;

    return 0;
}
