#include <iostream>
using namespace std;

int main()
{
    cout<<"char: "<<sizeof(char)<<"\n"; /*it indicates how many bytes of space it occupies in memory*/
    double value = 19E4;
    cout<<"value: "<<value<<endl; // output: 190000 (E4 = 10^4 or e4 = 10^4)
    string myText = "C++ will get easier over time"; 
    /*Strings are sequences of characters. 
    They can be thought of as a collection of many `char` values ​​grouped together. 
    This will be demonstrated in later lessons.*/
    return 0;
}