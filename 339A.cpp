#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string bet,newbet;
    cin >> bet;
    for(int i =0;i<bet.size();i++){
        if(bet[i]!='+'){
            newbet.push_back(bet[i]);
        }
    }
    sort(newbet.begin(),newbet.end());
    cout << newbet[0];
    for(int i=1;i<newbet.length();i++){
        cout << '+'<<newbet[i];
    }
        
    return 0;
}
