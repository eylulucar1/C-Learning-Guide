#include <iostream>
using namespace std;
// Finding perfect numbers. A perfect number is a number that is equal to the sum of its divisors.
void isPerfectNumber(int data){
    int sum=0;
    for(int i=1;i<data;i++){
        if(data%i==0){
            sum+=i;
        }
    }
    if(sum==data){
        cout<<"The number "<<data<<" is a perfect number."<<endl;
        return;
    }else{
        cout<<"The number "<<data<<" isn't a perfect number."<<endl;
        return;
    }
}
int main(){
    int data;
    cout<<"Enter a number: ";
    cin>>data;
    isPerfectNumber(data);
    return 0;
}