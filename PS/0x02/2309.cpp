// https://www.acmicpc.net/problem/2309

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a[9], b, s = -100;
    
    for(int i = 0; i <= 8; i++){
        cin >> b;
        s += b;
        a[i] = b;
    }
    
    for(int i = 0; i <= 8; i++){
        for(int j = 8; j > i; j--){
            if(a[i] + a[j] == s){
                a[i] = a[j] = 101;
                i = 8;
                sort(a, a+9);
                break;
            }
        }
    }
    
    for(int i = 0; i <= 6; i++)
        cout << a[i] << "\n";
}
