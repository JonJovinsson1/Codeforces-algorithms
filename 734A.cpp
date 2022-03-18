#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
    int x,a{0},d{0};
    char g;
    char a1 = 'A';
    char d1 = 'D';
        
    cin>>x;
    while(x--)
    {
        cin>>g;
        if(g == a1)
        {
            a+=1;
        }
        else if(g==d1)
        {
            d+=1;
        }   
    }
    if(d>a)
    {
        cout<<"Danik";
    }
    else if(a>d)
    {
        cout<<"Anton";
    }
    else
    {
        cout<<"Friendship";
    }
    return 0;
    }
