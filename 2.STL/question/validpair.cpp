#include<iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define int long long
#define vi vector<ll>
#define endl cout<<"\n"
#define umii unordered_map<int,int>
#define sortvector(a) sort(a.begin(),a.end())
#define f(i,s,e) for(int i=s; i<e; i++)

bool checkvalidpair2(vi &a,int n,int k,int m){
    if(n%2 !=0) return false;
    umii mp;
    f(i,0,n){
        mp[a[i]%k]++;
    }
    // iterate over the unordered map
    for(auto it=mp.begin(); it !=mp.end(); it++){
        // find a%k
        int a=it->first;
        int x=(m-x+k)%k;
        if(mp[x] != mp[a]) return false;
    }
    return true;
}

bool checkvalidpair(vi &a,int n,int k,int m){
    // if n is odd just return the false
    if(n%2==1){
        return false;
    }
    for(int i=0; i<n; i++){
        if(a[i]==-1){
            continue;
        }
        for(int j=i+1; j<n; j++){
            if(a[j]==-1) continue;
            if((a[i]+a[j])%k==m){
                a[i]=-1;
                a[j]=-1;
                break;
            }
        }
    }
    f(i,0,n){
        if(a[i]!=-1){
            return false;
        }
    }
    return true;
}

int32_t main(){
    
    int n; cin>>n;
    vi a(n);
    f(i,0,n) cin>>a[i];
    int k,m; cin>>k>>m;
    if(checkvalidpair2(a,n,k,m)) cout<<"true"<<"\n";
    else cout<<"false"<<"\n";

    return 0;
}