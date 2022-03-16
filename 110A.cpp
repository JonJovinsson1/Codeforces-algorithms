#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string checkthis;
    char four{'4'};
    char seven{'7'};
    int count{0};
    cin>>checkthis;
    for(int i=0;i<=checkthis.length()-1;i++)
    {
        if(checkthis[i]==four || checkthis[i]==seven)
        {
            count+=1;
        }
    }
    //cout<<count;
    if(count==4 || count==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
    }
