#include <iostream>
#include <cmath>
using namespace std;
// prime number finding application
void primeNumberOrNot(int data){
    for(int i = 2; i<sqrt(data);i++){
        if(data % i == 0){
            cout<<"not a prime number: "<<data<<endl;
            return;
        }
    }
    cout<<"it's a prime number: "<<data<<endl;
}
int main(){
    int data;
    cout<<"Enter a number:";
    cin>>data;
    if(data<0){
        cout<<"ERROR: negative number input";
        return 0;
    }
    if(data==0){
        cout<<"Zero is a prime number";
        return 0;
    }
    primeNumberOrNot(data);
    return 0;
}