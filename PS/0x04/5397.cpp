// https://www.acmicpc.net/problem/5397

#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    
    cin >> n;
    
    string s;
    
    for(int i = 0; i < n; i++){
        cin >> s;
        
        list<int> L;
        list<int>::iterator cur = L.begin();
        
        for(auto e: s){
            if(e == '<'){
                if(cur != L.begin())
                    cur--;
            }
            else if(e == '>'){
                if(cur != L.end())
                    cur++;
            }
            else if(e == '-'){
                if(cur != L.begin())
                    cur = L.erase(--cur);
            }
            else
                L.insert(cur, e);
        }
        for(char e: L)
            cout << e;
        cout << "\n";
    }
}
