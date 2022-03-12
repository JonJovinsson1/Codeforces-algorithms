#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int cost{0} ,money{0} ,amount{0};
    cin>>cost>>money>>amount;
    //cout<<cost<<money<<amount;
    int price_multiplied{0};
    
    for(int i=1;i<=amount;i++){
        price_multiplied += i*cost;
    }
    
    //cout<<price_multiplied;
    int borrowed{0};
    int zero{0};
    borrowed = price_multiplied - money;
    if(borrowed<zero){
        borrowed = 0;
    }
    cout << borrowed;
    return 0;
}
