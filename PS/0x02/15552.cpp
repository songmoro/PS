// https://www.acmicpc.net/problem/15552

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long t;
    int a, b;
    
    cin >> t;
    
    for(long long i = 0; i < t; i++){
        cin >> a >> b;
        cout << a + b << "\n";
    }
}
