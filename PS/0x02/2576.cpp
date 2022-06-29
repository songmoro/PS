// https://www.acmicpc.net/problem/2576

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int s = 0, m = 99, a;
    
    for(int i = 0; i <= 6; i++){
        cin >> a;
        if(a % 2 == 1){
            s += a;
            m = min({a,m});
        }
    }
    if(s != 0){
        cout << s << "\n";
        cout << m;
    }
    else
        cout << -1;
}
