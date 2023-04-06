#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n; vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    cout<<"iterate in vector"<<"\n";
    for(auto i:a) cout<<i<<" ";
    cout<<"\n";

    map<int,int> mp;
    mp[0]=10;
    mp[1]=20;
    mp[2]=30;
    cout<<"in map"<<"\n";
    for(auto i: mp){
        cout<<i.first<<"->"<<i.second;
    }
    cout<<"\n";

    set<int> s;
    s.insert(2);
    s.insert(4);
    s.insert(3);
    cout<<"in set"<<"\n";
    for(auto i:s) cout<<i<<" ";
    cout<<"\n";
    return 0;
}