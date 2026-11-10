#include <iostream>
using namespace std;

int main()
{
    // Subject : Positive or Negative?
    int numb_one, numb_two;
    cout<<"Enter a number one:";
    cin>>numb_one;
    cout<<"Enter a number two:";
    cin>>numb_two;

    if(numb_one<0){
        cout<<"numb one : negative"<<endl;
        if((numb_two<0) && (numb_two>numb_one)){
            cout<<"numb two : negative and greater than numb one"<<endl;
        }else if((numb_two<0) && (numb_two<numb_one)){
            cout<<"numb two : negative and less than numb one"<<endl;
        }else if((numb_two<0) && (numb_two==numb_one)){
            cout<<"numb two : negative and equal to numb one"<<endl;
        }else if(numb_two>0){
            cout<<"numb two : positive and greater than numb one"<<endl;
        }else{
            cout<<"numb two : zero and greater than numb one"<<endl;
        }
    }else if(numb_one>0){
        cout<<"numb one : positive"<<endl;
        if((numb_two>0) && (numb_two>numb_one)){
            cout<<"numb two : positive and greater than numb one"<<endl;
        }else if((numb_two>0) && (numb_two<numb_one)){
            cout<<"numb two : positive and less than numb one"<<endl;
        }else if((numb_two>0) && (numb_two==numb_one)){
            cout<<"numb two : positive and equal to numb one"<<endl;
        }else if(numb_two<0){
            cout<<"numb two : negative and less than numb one"<<endl;
        }else{
            cout<<"numb two : zero and less than numb one"<<endl;
        }
    }else{
        cout<<"numb one : zero"<<endl;
        if(numb_two>0){
            cout<<"numb two : positive and greater than numb one"<<endl;
        }else if(numb_two<0){
            cout<<"numb two : negative and less than numb one"<<endl;
        }else{
            cout<<"numb two : zero and equal to numb one"<<endl;
        }
    }
    return 0;
}