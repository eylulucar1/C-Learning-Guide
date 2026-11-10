#include <iostream>
using namespace std;

int main()
{
    // Four-operation calculator application using switch-case
    int numb1, numb2;
    cout << "Enter number one: ";
    cin >> numb1;
    cout << "Enter number two: ";
    cin >> numb2;
    cout << "Values: " << numb1 << " ? " << numb2 << endl;

    char op; 
    cout << "Enter an operator (+, -, *, %, /): ";
    cin >> op;

    switch(op) {
        case '+': 
            cout << "Output: " << numb1 + numb2 << endl; 
            break;
            
        case '-': 
            cout << "Output One (numb1 - numb2): " << numb1 - numb2 << endl; 
            cout << "Output Two (numb2 - numb1): " << numb2 - numb1 << endl; 
            break;
            
        case '*': 
            cout << "Output: " << numb1 * numb2 << endl; 
            break;
            
        case '/': 
            if (numb2 != 0) {
                cout << "Output One (numb1 / numb2): " << (float)numb1 / numb2 << endl;
            } else {
                cout << "Output One: Cannot divide by zero!" << endl;
            }
            
            if (numb1 != 0) {
                cout << "Output Two (numb2 / numb1): " << (float)numb2 / numb1 << endl;
            } else {
                cout << "Output Two: Cannot divide by zero!" << endl;
            }
            break;
            
        case '%': 
            if (numb2 != 0) {
                cout << "Output One (numb1 % numb2): " << numb1 % numb2 << endl;
            } else {
                cout << "Output One: Cannot modulo by zero!" << endl;
            }
            
            if (numb1 != 0) {
                cout << "Output Two (numb2 % numb1): " << numb2 % numb1 << endl;
            } else {
                cout << "Output Two: Cannot modulo by zero!" << endl;
            }
            break;
            
        default:
            cout << "Invalid operator entered!" << endl;
            break;
    }
// Odd or Even?
    int numb;
    cout << "Enter a number: ";
    cin >> numb;

    switch(sayi % 2) {
        case 0:
            cout << sayi << " number is even." << endl;
            break;
            
        case 1:
        case -1: 
            cout << sayi << " number is odd." << endl;
            break;
    }

    return 0;
}