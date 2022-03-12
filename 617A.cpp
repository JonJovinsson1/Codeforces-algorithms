#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int x{0};
    int counter{0};
    cin>>x;
    do {
        x-=5;
        counter++;
    }
    while(5<=x);
    if(x>=1){
        counter+=1;
    }
    cout<<counter;
    
}
