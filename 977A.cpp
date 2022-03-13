#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
        int number,minus;
        cin>>number>>minus;
        for(int i=0;i<minus;i++){
            if(number%10==0 and number!=10){
                number=number/10;
            }
            else if(number==10){
                number = number-minus;
                break;
            }
            else{
                number--;
            }
        }
        cout<<number;
        
        
    return 0;}
