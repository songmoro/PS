// https://www.acmicpc.net/problem/1267

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, t[21], Y = 0, M = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> t[i];

        Y += (t[i] / 30 + 1) * 10;
        M += (t[i] / 60 + 1) * 15;
    }
    
    if(Y == M)
        cout << "Y M " << Y;
    else{
        if(Y > M)
            cout << "M " << M;
        else
            cout << "Y " << Y;
            }
}
