#include <iostream>
using namespace std;
//Finding the largest and smallest values ​​of the entered numbers.
void findMax(int arr[],int n){
    int max = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    endl<<cout<<"Max Data: "<<max<<endl;
}
void findMin(int arr[],int n){
    int min = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    endl<<cout<<"Max Data: "<<max<<endl;
}
int main(){
    int data;
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"Enter "<<i+1<<". number:";
        cin>>data;
        arr[i] = data;
    }
    findMax(arr,10);
    findMin(arr,10);
    return 0;
}