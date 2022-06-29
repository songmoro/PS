// https://www.acmicpc.net/problem/2577

#include <bits/stdc++.h>
using namespace std;


int arr[10];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    
    for(auto e: to_string(a*b*c))
        arr[e-'0']++;
    for(int i: arr)
        cout << i << "\n";
    
}
