#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    float  x,y,t,v;
    cin>>x;
    v=x;
    while(x){
        
        cin>>y;
        t+=y;
        x--;
        if(x==0){
            cout<<t/v;
        }
    }
    return 0;
    }
