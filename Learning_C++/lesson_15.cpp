#include <iostream>
using namespace std;

int main()
{
//left/right shift logic
    short int x=14;
    x>>=1; //it means I will divide an integer by powers of two. x = 14 / (2^1)
    cout<<"x: "<<x<<"\n"; // 7
    x<<=2; //it means to multiply an integer by powers of two. x = 7 * (2^2);
    cout<<"x: "<<x<<"\n"; // 28
//special four-digit numbers
    short int number,result,ab,cd;
    cout<<"Enter a positive four-digit number:";
    cin>>number;
    ab=number/100;
    cd=number%100;
    result = (ab+cd) * (ab+cd);
    if(result == number)
     cout<<number<<" is a special number\n";
    else
     cout<<number<<" is not a special number\n";
    return 0;
}