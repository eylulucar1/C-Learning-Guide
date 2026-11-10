#include <iostream>
using namespace std;

int main()
{
// Subject : While
    int i=0;
    while(i<7){
        cout<<"C++ is a wonderful language\n";
        i++;
    }
    // prints "C++ is a wonderful language" to the screen seven times
    int tmp=0;
    while(tmp<7){
        cout<<tmp<<endl;
        tmp++;
    }
    // Prints to the screen from 0 to 7
    /* Output:
    0
    1
    2
    3
    4
    5
    6
    7
    */
    return 0;
}