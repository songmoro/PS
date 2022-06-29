// https://www.acmicpc.net/problem/10808

#include <bits/stdc++.h>
using namespace std;


int a[26];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string arr;
    cin >> arr;
    
    for(auto c: arr)
        a[c-'a']++;
    
    for(int i: a)
        cout << i << " ";
}
