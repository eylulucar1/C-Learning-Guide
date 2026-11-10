#include <iostream>
using namespace std;

int main()
{
// Subject : Receiving data from user
    int numb1;
    cout << "Enter a number:";
    cin >> numb1;
    //For example, if 13 was entered;
    cout << "\n The number you entered is "<<numb1<<endl; // output -> The number you entered is 13
// an example
    int x,y;
    cout << "Enter a number for x:";
    cin >> x;
    cout << "Enter a number for y:";
    cin >> y;
    cout << "\n The sum of the numbers you entered is "<<x+y<<endl; // output -> The sum of the numbers you entered is 22
// another exapmle : Write the code that calculates the area and circumference of a circle.
    const float pi = 3.14;
    int r;
    cout << "Enter a the radius of the circle: ";
    cin >> r;
    double area = pi * r * r;
    double circum = 2 * pi * r;
    cout << "area of a circle: "<<area<<" circumference of a circle: "<<circum<<endl;
// Subject : Receiving textual inputs
    string text;
    cout << "Enter a message:";
    cin>>text; //This code block doesn't read anything after the space.
    //We can use this instead;
    getline(cin,text);
    // For example; text = "C++ is very easy"
    cout<<"your message is '"<<text<<"'"<<endl; //output -> your message is 'C++ is very easy'
// A difficult example for the time being
    char myText[100]; // it's a array
    cout<<"Enter a message:";
    cin.getline(myText,sizeof(myText));
    cout<<"your message is '"<<myText<<"'"<<endl;
    return 0;
}


