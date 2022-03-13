#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
    int total{0},total1{0},exiting{0},entering{0},c{0};
    cin>>c;
    for(int i=1;i<=c;i++){
        cin>>exiting;
        cin>>entering;
        total += entering-exiting;
        if(total>total1){
            total1=total;
        }
    }
    cout<<total1<<endl;
    return 0;
    }
