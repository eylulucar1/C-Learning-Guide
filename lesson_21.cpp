#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<20;i++){
        if(i==6){
            break;
        }
        cout<<i<<" ";
    } // output : 0 1 2 3 4 5
    cout<<endl;
    for(int j=0;j<20;j++){
        if(j%2==0){
            continue;
        }
        cout<<j<<" ";
    } // output : just odd's 1 3 5 7 9 11 13 15 17 19
}