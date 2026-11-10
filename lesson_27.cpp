
#include <iostream>
using namespace std;

// Fibonacci - Iterative
void fibonacciOne(int data) {
    if (data < 0) {
        cout << "ERROR" << endl;
        return;
    }

    int first = 0;
    int second = 1;

    for (int i = 0; i < data; i++) {
        cout << first << " ";

        int next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
}

// Recursive Fibonacci calculation
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Fibonacci - Recursive
void fibonacciTwo(int data) {
    if (data < 0) {
        cout << "ERROR" << endl;
        return;
    }

    for (int i = 0; i < data; i++) {
        cout << fibonacci(i) << " ";
    }

    cout << endl;
}

int main() {
    int data;

    cout << "How many numbers of the Fibonacci sequence would you like to print? ";
    cin >> data;

    cout << "Iterative: ";
    fibonacciOne(data);

    cout << "Recursive: ";
    fibonacciTwo(data);
    int numb;
    cout << "Which Fibonacci number do you want? Enter a number: ";
    cin>>numb;    
    cout<<numb<<". Value: "<<fibonacci(numb)<<endl;
    return 0;
}
