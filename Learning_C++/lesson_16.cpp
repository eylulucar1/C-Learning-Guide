#include <iostream>
using namespace std;

int main()
{
    // Char Control
    char myCharacter;
    cout<<"Enter a character:";
    cin>>myCharacter;
    if((myCharacter>='A') && (myCharacter <='Z')) cout<<myCharacter<<" is a capital letter\n";
    else if((myCharacter>='a') && (myCharacter<='z')) cout<<myCharacter<<" is a lowercase letter\n";
    else cout<<myCharacter<<" is not a letter\n";
    // İnt Control
    int number, result;
    cout<<"Enter a positive number:";
    cin>>number;
    if(number<0) cout<<"please do not enter a negative number or zero\n";
    else 
    {
        result = sqrt(number);
        result = result*result;
        if(result == number){
            cout<<"square root of "<<result<<" is an integer\n";
        }
        else
            cout<<"The number entered is not an integer\n";
    }
    
    
    return 0;

    
}