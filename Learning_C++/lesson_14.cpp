#include <iostream>
using namespace std;

int main()
{
//Identifying vowels and consonants using switch-case
    char letter;
    cout<<"Enter a letter:";
    cin>>letter;
    switch(letter){
        case 'a':
        case 'e':
        case 'u':
        case 'o':
        case 'i':cout<<letter<<" is a vowel\n";break;
        default:cout<<letter<<" is a consonant ";
                cout<<"or not a letter\n";break;
    }
//Find out how many days are in the entered month.
    short int month;
    cout<<"Enter a month number:";
    cin>>month;
    switch(month){
        case 4:
        case 6:
        case 9:
        case 11:cout<<"There are 30 days\n";break;
        case 1;
        case 3;
        case 5;
        case 7;
        case 8;
        case 10;
        case 12:cout<<"There are 31 days\n";break;
        case 2:cout<<"There are 28 or 29 days\n";break;
        default:cout<<"There is no such number\n"; break;
    }
    return 0;
}