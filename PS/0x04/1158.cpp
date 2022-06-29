// https://www.acmicpc.net/problem/1158

#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    
    cin >> n >> k;
    
    list<int> L;
    
    for(int i = 1; i <= n; i++)
        L.push_back(i);
    
    list<int>::iterator cur = L.begin();
    
    cout << "<";
    
    while(n--){
        for(int j = 0; j < k - 1; j++){
            cur++;
            if(cur == L.end())
                cur = L.begin();
        }
        
        if(n==0){
            cout << *cur << ">";
            cur = L.erase(cur--);
        }
        else{
            cout << *cur << ", ";
            cur = L.erase(cur--);
        }
        
        if(cur == L.end())
            cur = L.begin();
    }
    
}
