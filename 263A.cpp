#include <iostream>
#include <string>
using namespace std;
int main(){
    int n{0},k{0},j{0};
    while(n!=1){
        k++;
        cin >> n;
        //cout << n << endl;
        //cout << k << endl;
    }
    if(k == 1 or k == 5 or k == 21 or k == 25){
        cout << "4";
    }
    else if(k == 2 or k == 6 or k == 4 or k == 10 or k == 16 or k == 22 or k == 24 or k == 20){
        cout << "3";
    }
    else if(k == 11 or k == 15 or k == 3 or k == 7 or k == 9  or k == 19 or k == 23 or k == 17){
        cout << "2";
    }
    else if(k == 12 or k == 8 or k == 14 or k == 18){
        cout << "1";
    }
    else if(k == 13){
        cout << "0";
    }
    return 0;
}
