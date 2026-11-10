#include <iostream>
using namespace std;

int main()
{
// Subject : Operators
    /*
    '+' -> addition
    '-' -> subtraction
    '*' -> multiplication
    '/' -> division (divide by x)
    '%' -> modulus (Finding the remainder when divided by x)
    '++' -> increment (increase by one)
    '--' -> decrement (decrease by one)
    */
// An exapmle
    int x = 7;
    int y = ++x + x++;
    //++x : First increase the value, then equalize it.
    //x++ : First equate, then increase the value.
    cout<<"x:"<<x<<" y:"<<y<<endl;
    //output -> x:9 y:16
// Another example
    int totalSecond = 3665;
    int hour = totalSecond / 3600;
    int minute = (totalSecond % 3600) / 60;
    int sec = (totalSecond % 3600) % 60;
    cout << hour << " hour "<<minute<< " minute "<<sec<< " second"<<endl;
// Another example
    int lifepoint = 100;
    int level = 1;
    cout<<"The elixir is being drunk. New lifepoint:"<<++lifepoint<<endl;
    int damage = (++level) * 10;
    cout<<"Fell into a trap; health decreased. New lifepoint:"<<lifepoint-damage<<endl;
// Another example
    int value = 654;
    int temp = value;
    int hundredsdigit = value / 100; //hundredsdigit = 6
    value %= 100; // new value = 54
    int tensdigit = value / 10;
    int onesdigit = value % 10;
    cout<<hundredsdigit<<tensdigit<<onesdigit<<" = "<<temp<<endl; // output -> 654 = 654
// Another example
    int a = 5;
    int b = 2;
    int c = a++ * --b + a / b;
    cout << "a: " << a << " b: " << b << " c: " << c << endl;
    //output -> a: 6 b: 1 c: 11
// Another example
    int x = 14;
    int y = 4;
    int z = (x % y) + (--y);
    x = z++;
    cout << "x: " << x << " y: " << y << " z: " << z << endl;
    //output -> x: 5 y: 3 z: 6
    return 0;
}
