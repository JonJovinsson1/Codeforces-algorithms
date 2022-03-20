#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int year;
    cin>>year;
    while(true) {
        year+=1;
        int thousand = year/1000;
        int hundred = year/100 % 10;
        int tens = year/10 %10;
        int ones = year%10;
        if(thousand!=hundred && thousand!= tens && thousand!=tens && thousand!=ones &&
        hundred!=tens && hundred!=ones && tens!=ones) {
            cout << year;
            return 0;
        }
    }
    return 0;
    }
