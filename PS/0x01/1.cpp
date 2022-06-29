#include <iostream>
using namespace std;

int func1(int n){
    int sum = 0;
    
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 || i % 5 == 0) sum += i;
    }
    
    return sum;
}

int main(){
    cout << func1(16) << endl;
    cout << func1(34567) << endl;
    cout << func1(27369) << endl;
}
