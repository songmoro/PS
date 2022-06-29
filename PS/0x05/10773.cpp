// https://www.acmicpc.net/problem/10773

#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    stack<long long> s;
    
    int n;
    long long x = 0, j;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> j;
        s.push(j);
    }
    
    while(!s.empty()){
        if(s.top() == 0){
            int k = 0;
            
            do{
                
            }
        }
        else{
            x += s.top();
            s.pop();
        }
    }
    cout << x;
}
