#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int a,b,counter,groups{0};
    cin>>counter;
    if(counter==1){
        cout<<"1";
        return 0;
    }
    while(counter>0) {
        cin>>a;
        counter-=1;
        if(a!=b){
            groups+=1;
            //cout<<groups<<endl;
        }
        if(counter==0){ break;}
        cin>>b;
        counter-=1;
        if(a!=b){
            groups+=1;
            //cout<<groups<<endl;
        }
        if(counter==0){ break;}
        
    }
    cout<<groups;
    return 0;
    }
