// https://www.acmicpc.net/problem/1406

#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long n;
    
    string s;
    char a;
    cin >> s;
    
    list<int> L;
    
    for(auto e: s)
        L.push_back(e);
    
    list<int>::iterator cur = L.end();
    
    cin >> n;
    
    for(long long i = 0; i < n; i++){
        cin >> a;
        
        if(a == 'L' && cur != L.begin())
            cur--;
        else if(a == 'D' && cur != L.end())
            cur++;
        else if(a == 'B' && cur != L.begin())
            cur = L.erase(--cur);
        else if(a == 'P'){
            cin >> a;
            
            L.insert(cur, a);
        }
    }
    
    for(char e: L)
        cout << e;
    cout << "\n";
}
