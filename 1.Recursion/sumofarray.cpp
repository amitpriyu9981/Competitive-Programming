#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int curr,vector<int> &a){
    if(curr==a.size()){
        return 0;
    }
    return (a[curr]+sum(curr+1,a));
}

int main(){
    int n; cin>>n; vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int ans=sum(0,a);
    cout<<ans<<endl;
}