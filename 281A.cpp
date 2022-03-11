#include <iostream>
#include <string>
using namespace std;
int main(){
    string capitolise_this;
    cin >> capitolise_this;
    capitolise_this[0]= (toupper(capitolise_this[0]));
    cout << capitolise_this;
    return 0;
}
