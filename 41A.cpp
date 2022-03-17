#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
    string word,check,reversed;
    cin>>word>>check;
    int x = word.length();
    for(int i=x-1;i>=0;i--)
    {
        reversed+=word[i];
    }
    if(reversed==check)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
    }
