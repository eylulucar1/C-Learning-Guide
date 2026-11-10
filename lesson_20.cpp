#include <iostream>
using namespace std;
// printing odd or even numbers using a for loop
int main(){
    int i = 0;
    for(i;i<20;i++){
        if(i%2==0){
            cout<<i<<" is even."<<endl;
        }
        else{
            cout<<i<<" is odd."<<endl;
        }
    }
    cout<<endl;
    //foreach loop
    int arr[5] = {1,2,3,4,5};
    for(int x:arr){
        cout<<x<<" ";
    }
    //output : 1 2 3 4 5
    return 0;
}