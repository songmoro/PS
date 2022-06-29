// https://www.acmicpc.net/problem/10807

#include <bits/stdc++.h>
using namespace std;


int arr[210];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, v;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> v;
        arr[100+v]++;
    }
    cin >> n;
    cout << arr[100+n];
}
