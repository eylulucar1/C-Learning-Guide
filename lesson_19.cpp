#include <iostream>
using namespace std;
// multiplication table
int main()
{
    int i=0;
    while(i<10){
        int j=0;
        while(j<10){
            cout<<i<<"*"<<j<<"=";
            cout<<i*j<<" ";
            j++;    
        }
        i++;
    }
    return 0;
}