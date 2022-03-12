#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string word;
    cin>>word;
    int uppercase {0};
    int lowercase {0};
    int word_length = word.length();
    for(int i=0;i<=word_length;i++){
        if(isupper(word[i])){
            uppercase+=1;
        }
        else if(islower(word[i])){
            lowercase+=1;
        }
    }
    if(lowercase >= uppercase){
        transform(word.begin(),word.end(),word.begin(),::tolower);
    }
    else{
        transform(word.begin(),word.end(),word.begin(),::toupper);
    }
    cout<<word;
    return 0;
}
