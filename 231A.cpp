#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a,b,c;
    int t{0};
    while(n){
        
        cin >> a;
        cin >> b;
        cin >> c;
        if(a + b + c >=2){
            t +=1;
        }
        n--;
        }
    cout << t;
	return 0;
}
