// https://www.acmicpc.net/problem/9498

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a;
    
    cin >> a;
    
    if(a >= 90)
        cout << "A";
    else if(a >= 80)
        cout << "B";
    else if(a >= 70)
        cout << "C";
    else if(a >= 60)
        cout << "D";
    else
        cout << "F";
}