#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int plusMinus1( long long x) {
    if(x%2==0){
        cout<<x/2;
    }
    else {
        cout<<(0-(x/2))-1;
    }
    return 0;
}

int main(){
    long long x;
    cin>>x;
    plusMinus1(x);
    
    
    return 0;
    }
