// https://www.acmicpc.net/problem/13300

#include <bits/stdc++.h>
using namespace std;

int a[12];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, s, y, x = 0;
    
    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        cin >> s >> y;
        if(s == 0)
            a[y-1]++;
        else
            a[y+6-1]++;
    }
    
    for(int i = 0; i < 12; i++){
        if(a[i] == 0)
            continue;
        else{
            if(a[i] % k != 0)
                x++;
            x += (a[i] / k);
        }
    }
    
    cout << x;
}
