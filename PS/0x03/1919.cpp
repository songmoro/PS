// https://www.acmicpc.net/problem/1919

#include <bits/stdc++.h>
using namespace std;

int a[26];
int b[26];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string x, y;
    int s = 0;
    
    cin >> x;
    cin >> y;
    
    for(auto e: x)
        a[e-'a']++;
    for(auto e: y)
        b[e-'a']++;
    
    for(int i = 0; i < 26; i++){
        if(a[i] == b[i])
            continue;
        else
            s += max({a[i], b[i]}) - min({a[i], b[i]});
    }
    
    cout << s;
}
