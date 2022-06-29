// https://www.acmicpc.net/problem/10828

#include <bits/stdc++.h>
using namespace std;

int st[10010];
int pos = 0;

void push(int x){
    st[pos++] = x;
}

void pop(){
    if(pos == 0)
        cout << -1;
    else
        cout << st[pos-- - 1];
    cout << "\n";
}

void size(){
    cout << pos << "\n";
}

void empty(){
    if(pos == 0)
        cout << 1;
    else
        cout << 0;
    cout << "\n";
}

void top(){
    if(pos == 0)
        cout << -1;
    else
        cout << st[pos - 1];
    cout << "\n";
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    int n, x;
    string s;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> s;
        
        if(s == "push"){
            cin >> x;
            
            push(x);
        }
        else if(s == "pop")
            pop();
        else if(s == "size")
            size();
        else if(s == "empty")
            empty();
        else if(s == "top")
            top();
    }
}
