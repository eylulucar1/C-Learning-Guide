#include <iostream>
using namespace std;
// factorial
void facOne(int data){
    long int fac=1;
    for(int i=1;i<=data;i++){
        fac*=i;
    }
    cout<<data<<"! = "<<fac<<endl;
}
long int facTwo(int data){
    if(data==0){
        return 1;
    }
    return data * facTwo(data-1);
}
int main(){
    int data;
    bool flag = true;
    while(flag){
        cout<<"Enter a number:";
        cin>>data;
        if(data>0) flag = false;
        else cout<<"Please try again."<<endl;
    }
    facOne(data);
    cout<<data<<"! = "<<facTwo(data)<<endl;
    return 0;
}