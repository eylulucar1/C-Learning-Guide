#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char greeting[6] = {'h','e','l','l','o','\0'}; // Character strings end with 'null'
    cout<<"message: "<<greeting<<"\n"; //output -> message: hello
    return 0;

    //ready function
    char str1[6] = "Eylul";
    char str2[6] = "Ucar";
    char str3[6];;
    int mylength;
    strcpy(str3,str1);
    cout<<"strcpy(str3, str1): "<<str3<<"\n"; // output : Eylul
    strcat(str1,str2);
    cout<<"strcat(str1, str2): "<<str1<<"\n"; // output : EylulUcar
    mylength = strlen(str1);
    cout<<"strlen(str1): "<<mylength<<"\n";
    return 0;

    // if use string

    string st1= "eylul";
    string st2 = "ucar";
    string st3;
    int length;
    st3 = st1 + ' ' + st2;// eylul ucar
    st3 = st1.append(st2); // eylulucar
    st3 = st1.append(" ").append(st2); // eylul ucar
    cout<<st3<<"\n";

    
}