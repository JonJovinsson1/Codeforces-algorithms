#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string chat;
    cin >> chat;
    int b{0};
    sort(chat.begin(),chat.end());
    for(int i=0;i<chat.length();i++){
        if(chat[i]==chat[i+1]){
            b=b;
        }
        else{
            b+=1;
    }}
    if(b%2==1){
        cout<< "IGNORE HIM!";
    }
    else{
        cout<< "CHAT WITH HER!";
    }
    
    return 0;
}
