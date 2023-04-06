#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#define ll long long
using namespace std;
 
 
void precal(){
}
 
void solve(){
    int n;
    cin>>n;
    vector<int>p(n),a(n),b(n);
    for(int i=0;i<n;i++) cin>>p[i];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    
    set<int>s[4];
    for(int i=0;i<n;i++){
        s[a[i]].insert(p[i]);
        s[b[i]].insert(p[i]);
    }
    
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int col,price=0;
        cin>>col;
        price = *s[col].begin();
        for(int j=1;j<=3;j++) s[j].erase(price);
        if(price) cout<<price<<" ";
        else cout<<-1<<" ";
    }
}   
 
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
            precal();
            int t=1;
            // cin>>t;
            for(int i=1;i<=t;i++){
                solve();
    }
    return 0;
}