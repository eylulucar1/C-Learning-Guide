#include <iostream>
using namespace std;
//Exponentiation Function
long long int exponentiation(int data,int exponent){
    long long int f=1;
    for(int i=0;i<exponent;i++){
        f*=data;
    }
    return f;
}
int main(){
    int data,ex;
    cout<<"Enter a number: ";
    cin>>data;
    cout<<"Enter a exponent value: ";
    cin>>ex;
    cout<<data<<" "<<"^"<<" "<<ex<<" = "<<exponentiation(data,ex)<<endl;
    return 0;
}