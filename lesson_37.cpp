#include <iostream>
using namespace std;
// number guessing game
int main(){
    int numb = rand()%100;
    int guess = -1;
    while(numb!=guess){
        cout<<"Enter a guess: ";
        cin>>guess;
        if(numb<guess){
            cout<<"Your estimate is way off. Try again!"<<endl;
        }
        else if(numb>guess){
            cout<<"Your estimate is too small. Try again!"<<endl;
        }
    }
    cout<<"Victory!"<<endl;
    return 0;
}