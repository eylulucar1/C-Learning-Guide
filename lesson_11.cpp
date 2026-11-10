#include <iostream>
using namespace std;

int main()
{
// Example : odd or even
    int value;
    cout<<"Enter a number";
    cin>>value;
    if(value<0){
        cout<<"Do not enter a negative value! Try Again.\n";
        cout<<"Enter a number";
        cin>>value;
    }else if(value>0){
        if(value % 2 == 0){
            cout<<"Value is even number.\n Value:"<<value<<endl;
        }
        else{
            cout<<"Value is odd number.\n Value:"<<value<<endl;
        }
    }else{
        cout<<"Value is zero and even number."<<endl;
    }
// Example : find min max
    #include <iostream>
using namespace std;

int main() {
    int numb1, numb2, numb3;
    
    cout << "Enter a number one: ";
    cin >> numb1;
    cout << "Enter a number two: ";
    cin >> numb2;
    cout << "Enter a number three: ";
    cin >> numb3;

    if ((numb1 >= numb2) && (numb1 >= numb3)) {
        cout << "Max: " << numb1 << endl;
    } else if ((numb2 >= numb1) && (numb2 >= numb3)) {
        cout << "Max: " << numb2 << endl;
    } else {
        cout << "Max: " << numb3 << endl;
    }

    if ((numb1 <= numb2) && (numb1 <= numb3)) {
        cout << "Min: " << numb1 << endl;
    } else if ((numb2 <= numb1) && (numb2 <= numb3)) {
        cout << "Min: " << numb2 << endl;
    } else {
        cout << "Min: " << numb3 << endl;
    }

    return 0;
}