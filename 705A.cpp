#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    int x;
    cin>>x;
    while(x){
        cout<<"I hate ";
        x--;
        if(x==0){
            cout<<"it";
            break;
        }
        cout<<"that I love ";
        x--;
        if(x==0){
            cout<<"it";
            break;
        }
        else{
            cout<<"that ";
        }
    }
    return 0;
    }
