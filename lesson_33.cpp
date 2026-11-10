#include <iostream>
#include <cstring>
using namespace std;
//String Properties
int main(){
    //.size() -> returns the number of characters in the string
    string str1 = "Eylul Ucar is a C++ programmer.";
    cout<<"str1.size(): "<<str1.size()<<"\n"; // output : 31
    //.length() -> returns the number of characters in the string
    cout<<"str1.length(): "<<str1.length()<<"\n"; // output : 31
    //.empty() -> returns true if the string is empty, otherwise false
    string str2 = "";
    cout<<"str2.empty(): "<<str2.empty()<<"\n"; // output : 1
    //.clear() -> clears the string
    str2.clear();
    cout<<"str2.empty(): "<<str2.empty()<<"\n"; // output : 1
    //.at() -> returns the character at the specified index
    cout<<"str1.at(0): "<<str1.at(0)<<"\n"; // output : E
    //.find() -> returns the index of the first occurrence of the specified substring
    cout<<"str1.find(\"C++\"): "<<str1.find("C++")<<"\n"; // output : 14
    //.substr() -> returns a substring starting from the specified index and of the specified length
    cout<<"str1.substr(14,3): "<<str1.substr(14,3)<<"\n"; // output : C++
    //.replace() -> replaces a substring starting from the specified index and of the specified length with the specified string
    str1.replace(14,3,"Java");  
    cout<<"str1.replace(14,3,\"Java\"): "<<str1<<"\n"; // output : Eylul Ucar is a Java programmer.
    //.insert() -> inserts the specified string at the specified index
    str1.insert(14,"C++ ");
    cout<<"str1.insert(14,\"C++ \"): "<<str1<<"\n"; // output : Eylul Ucar is a C++ Java programmer.
    //.erase() -> erases a substring starting from the specified index and of the specified length
    str1.erase(14,4);
    cout<<"str1.erase(14,4): "<<str1<<"\n"; // output : Eylul Ucar is a Java programmer.
    //.compare() -> compares the string with the specified string and returns 0 if they are equal, a negative value if the string is less than the specified string, and a positive value if the string is greater than the specified string
    string str3 = "Eylul Ucar is a Java programmer.";
    cout<<"str1.compare(str3): "<<str1.compare(str3)<<"\n";  // output : 0
    // .c_str() -> returns a pointer to a null-terminated character array representing the string
    const char* cstr = str1.c_str();
    cout<<"str1.c_str(): "<<cstr<<"\n"; // output : Eylul Ucar is a Java programmer.
}