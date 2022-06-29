// https://www.acmicpc.net/problem/2490

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b;
    
    for(int j = 0; j <= 2; j++){
        a = b = 0;
        for(int i = 0; i <= 3; i++){
            cin >> a;
            if(a == 0)
                b += 1;
        }
        if(b == 0)
            cout << "E";
        else
            cout << hex << uppercase << b + 9;
        cout << "\n";
    }
}
