#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    string a,b;
    cin>>a>>b;
    for(int i=0;i<=a.length()-1;i++){
        
        if(a[i]== '1' && b[i]=='1'){
            cout<<'0';            
        }
        else if(a[i]=='0'&&b[i]=='0'){
            cout<<'0';
        }
        else{
            cout<<'1';
        }
    }    
    
    return 0;
    }
