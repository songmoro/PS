#include <iostream>
#include <math.h>
using namespace std;

int func3(int n){
    if(int(sqrt(n))==sqrt(n))
        return 1;
    return 0;
}

int main(){
    cout << func3(9) << endl;
    cout << func3(693953651) << endl;
    cout << func3(756580036) << endl;
}
