#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int array_size{0},counter{0};
    cin>>array_size;
    int Height_array[array_size+1]{0};
    for(int i=0;i<=array_size-1;i++){
        cin>>Height_array[i];
    }
//    for(int i=0;i<=array_size-1;i++){
//        cout<<Height_array[i]<<endl;
//    }
    int temp{0};
    for(int i=0;i<=array_size;i++){
        for(int j=i+1;j<array_size;j++){
            if(Height_array[i] < Height_array[j]){
                temp = Height_array[i];
                Height_array[i] = Height_array[j];
                Height_array[j] = temp;
                counter = counter + 1;
 
            }
        }
    }
    cout<<counter;
    
    return 0;
}
