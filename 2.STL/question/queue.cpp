#include<iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define int long long
#define vi vector<ll>
#define endl cout<<"\n"
#define sortvector(a) sort(a.begin(),a.end())
#define f(i,s,e) for(int i=s; i<e; i++)

void solve(){
   int n; cin>>n;
   vi a(n);
   f(i,0,n) cin>>a[i];
   sortvector(a);
   int totalwaiting=0;
   int statisfiedpeople=0;
   f(i,0,n){
    if(totalwaiting <=a[i]){
        statisfiedpeople++;
        totalwaiting+=a[i];
    }
   }
   cout<<statisfiedpeople;
   endl;
}
int32_t main(){
    int t=1;
    for(int i=1; i<=t; i++){
        solve();
    }
}