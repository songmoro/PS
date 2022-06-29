#include <iostream>
using namespace std;

int func4(int n){
    int val = 1;
    
    while(2*val <= n) val *= 2;
    return val;
}

int main(){
    cout << func4(5) << endl;
    cout << func4(97615282) << endl;
    cout << func4(1024) << endl;
}
