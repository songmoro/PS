// https://www.acmicpc.net/problem/2443

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++)
            cout << " ";
        for(int j = n * 2 - 1; j >= i * 2 - 1; j--)
            cout << "*";
        cout << "\n";
    }
}
