#include <iostream>
using namespace std;

int main()
{
// Subject : if-else statement
    int x = 7;
    if(x>5)
    {
        cout<<"x is greater than 5"<<endl; // output -> x is greater than 5
    }
    else
    {
        cout<<"x is less than or equal to 5"<<endl;
    }
// or
    int y = 12,z=43;
    if(y>z)
    {
        cout<<"y is greater than z"<<endl;
    }
    else if(y<z)
    {
        cout<<"y is less than z"<<endl; // output -> y is less than z
    }
    else
    {
        cout<<"y is equal to z"<<endl;
    }
// Another example
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if(number<8)
        cout<<"this number is small\n";
    else if(number == 7)
        cout<<"this number is 7\n";
    else
        cout<<"this number is not small\n";
    return 0;
}