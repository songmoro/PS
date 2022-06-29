// https://www.acmicpc.net/problem/1475

#include <bits/stdc++.h>
using namespace std;


int arr[10];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a;
    cin >> a;

    for(auto e: to_string(a))
        arr[e-'0']++;
    
    arr[6] = ((arr[6] + arr[9])+1) / 2;
    cout << *max_element(arr,arr+9) << "\n";
}
