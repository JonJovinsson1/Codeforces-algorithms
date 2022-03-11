#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int counter{0};
    while(a<=b){
        a*=3;
        b*=2;
        counter= counter+1;
        }
    cout << counter;
    return 0;
}
