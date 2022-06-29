// https://www.acmicpc.net/problem/3273

#include <bits/stdc++.h>
using namespace std;

int a[2000010];
long long arr[1000010];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, t, x, s = 0;
    
    cin >> n;
    
    for(long long i = 0; i < n; i++){
        cin >> t;
        arr[i] = t;
        a[t]++;
    }
    
    cin >> x;
    if(a[x] == 1)
        a[x]--;
    if(a[x/2] == 1)
        a[x/2]--;
    
    for(auto e: arr){
        if(e != 0)
            if(a[x-e] == 1){
                s++;
                a[x-e]--;
                a[e]--;
            }
    }
    cout << s;
}
