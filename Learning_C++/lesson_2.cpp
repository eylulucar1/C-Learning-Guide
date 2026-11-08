#include <iostream>
using namespace std;

int main()
{
// Subject: Variables
    int myNumber = 11;
    bool myBoolean = true;
    char myLetter = 'E';
    float myFloatNumber = 3.99;
    double myDoubleNumber = 4.249882;
    cout << "My number is "<< myNumber << endl; // output -> My number is 11

// an example
    int x = 8, y = 9;
    int sum = x + y;
    cout << "Sum : "<< sum << endl; // output -> Sum : 17
// another example
    int a = 10, b = 11, c = 12;
    cout<<"a:"<< a <<" b:"<< b <<" c:"<< c << endl; // output : a:10 b:11 c:12
    a = b = c = 45;
    cout<<"a:"<< a <<" b:"<< b <<" c:"<< c << endl; // output : a:45 b:45 c:45
    return 0;
}