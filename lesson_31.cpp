#include <iostream>
using namespace std;
// What's recursion function?
//example 1
int factorial(int data){
    if(data==0){
        return 1;
    }
    return data * factorial(data-1);
}
//example 2
int sum(int data){
    if(data==0){
        return 0;
    }
    return data + sum(data-1);
}
//example 3
int fibonacci(int data){
    if(data==0){
        return 0;
    }
    if(data==1){
        return 1;
    }
    return fibonacci(data-1) + fibonacci(data-2);
}
//example 4
int power(int data,int exponent){
    if(exponent==0){
        return 1;
    }
    return data * power(data,exponent-1);
}
//example 5
int reverse(int data,int rev=0){
    if(data==0){
        return rev;
    }
    rev = rev*10 + data%10;
    return reverse(data/10,rev);
}
//example 6
int sumOfDigits(int data){
    if(data==0){
        return 0;
    }
    return data%10 + sumOfDigits(data/10);
}
//example 7
int countDigits(int data){
    if(data==0){
        return 0;
    }
    return 1 + countDigits(data/10);
}
int main(){
    cout<<"Factorial of 5: "<<factorial(5)<<endl;
    cout<<"Sum of 5: "<<sum(5)<<endl;
    cout<<"Fibonacci of 5: "<<fibonacci(5)<<endl;
    cout<<"Power of 2^3: "<<power(2,3)<<endl;
    cout<<"Reverse of 12345: "<<reverse(12345)<<endl;
    cout<<"Sum of digits of 12345: "<<sumOfDigits(12345)<<endl;
    cout<<"Count of digits of 12345: "<<countDigits(12345)<<endl;
    return 0;
}