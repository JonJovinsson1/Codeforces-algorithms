#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    int x[4],xi{4},counter{0};
    while(xi){
        cin>>x[xi];
        xi--;
    }
    if(x[1]==x[2]||x[1]==x[3]||x[1]==x[4]){
        xi+=1;
    }
    if(x[2]==x[3]||x[2]==x[4]){
        xi++;
    }
    if(x[3]==x[4]){
        xi++;
    }
    cout<<xi;
    return 0;
    }
