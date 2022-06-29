// https://www.acmicpc.net/problem/11328

#include <bits/stdc++.h>
using namespace std;

int arr[30];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s, c;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> s >> c;
        for(auto e: s)
            arr[e-'a']++;
        for(auto e: c)
            arr[e-'a']--;
        if(*min_element(arr, arr + 30) == 0 && *max_element(arr, arr + 30) == 0){
            cout << "Possible" << "\n";
        }
        else{
            cout << "Impossible" << "\n";
            fill(arr, arr+30, 0);
        }
    }
}
