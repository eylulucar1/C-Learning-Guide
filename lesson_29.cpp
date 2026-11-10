#include <iostream>
using namespace std;
//Using Functions with array 
int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int numbers[10] = {1,2,3,4,5,6,7,8,9,0};
    cout<<"Total: "<<sum(numbers,10)<<endl;
    return 0;
}