// https://www.acmicpc.net/problem/2562

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[10], m = -1, j;
    
    for(int i = 0; i < 9; i++){
        cin >> arr[i];
        m = max({arr[i], m});
        if(m == arr[i])
            j = i + 1;
    }
    
    cout << m << "\n" << j << "\n";
}
