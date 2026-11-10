#include <iostream>
#include <clocale> // language library
using namespace std;

int main()
{
// Subject 1
    setlocale(LC_ALL,"Turkish"); // acceptance of Turkish characters
    cout << "Çarşı karıştı" << endl; // output : Çarşı karıştı. if we hadn't written that library output : *ar** kar**t*
// Subject 2  
    const int myNumber = 7; // irrevocable appointment
    /*It must be defined at the moment it is introduced. Once defined, it cannot be changed. 
    If it is not defined at the outset, it cannot be defined later.*/
    // myNumber = 19; MİSTAKE!!
// Subject 3
    unsigned int  myNumber = -7; /*Incorrect usage. 'unsigned' does not allow for a minus sign. 
    If a minus sign is required, 'signed' must be used.*/
// Subject 4 : Type Casting
    float numb = 3.14;
    cout<<"numb: "<<numb<<endl; // output -> numb: 3.14
    numb = static_cast<int>(7.12); /*It converted this into an integer, and the value inside 
    the parentheses became the new value of the 'numb' variable.*/
    cout<<"numb: "<<numb<<endl; // output -> numb: 7 
    /*Because 7.12 is a decimal number, and since we are converting it into an integer, 
    only the whole-number part is stored in 'numb'.*/
    return 0;
}
