#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int num,height,each_height,width{0};
    cin>>num>>height;
    while(num!=0) {
        cin>>each_height;
        if(each_height>height){
            width+=2;
        }
        else {
            width+=1;
        }
        num-=1;
    }
    cout<<width;
    return 0;
    }
