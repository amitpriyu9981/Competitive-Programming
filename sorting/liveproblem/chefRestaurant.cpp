#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define int long long 
void solve(){
    int n,m; cin>>n>>m;
    vector<pair<int,int> > intervals;
    for(int i=0; i<n; i++){
        int start,end; cin>>start>>end;
        intervals.push_back(make_pair(start,end));
    }
    // sort the inervals array
    sort(intervals.begin(),intervals.end());
    while(m--){
        int currenttime;cin>>currenttime;
        int position=lower_bound(intervals.begin(),intervals.end(),make_pair(currenttime,0))-intervals.begin();
        // case-1
        if(position==0){
            int ans=intervals[0].first-currenttime;
            cout<<ans<<endl;
        }else{
            int ans=-1;
            if(intervals[position-1].second > currenttime ){
                ans=0; // make ans to 0
            }else if(position < intervals.size()){
                
                ans=intervals[position].first-currenttime;
            }
            cout<<ans<<endl;
        }
    }
}
int32_t main(){
    int t; cin>>t;
    for(int i=1; i<=t; i++){
        solve();
    }
    return 0;
}