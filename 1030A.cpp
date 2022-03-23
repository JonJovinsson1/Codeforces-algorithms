#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    while(n--) {
        cin>>k;
        if(k==1){
            cout<<"HARD";
            return 0;
        }
        else if(n==0 && k==0){
            cout<<"EASY";
        }
    }
    return 0;
    }
