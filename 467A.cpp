#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int num_rooms,counter{0},people,capacity;
    cin>>num_rooms;
    while(num_rooms--) {
        cin>>people>>capacity;
        if(people+2 <=capacity) {
            counter+=1;
        }
    }
    cout<<counter;
    return 0;
    }
