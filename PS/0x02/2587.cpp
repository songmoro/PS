// https://www.acmicpc.net/problem/2587

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a[5], b, s = 0;
    
    for(int i = 0; i <= 4; i++){
        cin >> b;
        s += b;
        a[i] = b;
    }
    
    sort(a, a+5);
    
    cout << s / 5 << "\n" << a[2];
}
