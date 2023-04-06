#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int  v[n];
    for(int i=0; i<n; i++) cin>>v[i];

    // sort in the descending order
    sort(v,v+n,greater<int>());
    long long ans=0;
    for(int i=0; i<n; i++) ans+=(v[i]*pow(2,i));
    cout<<ans;
    cout<<"\n";
}
int main(){
    
    int t; cin>>t;
    for(int i=1; i<=t; i++){
        solve();
    }

    return 0;
}