#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define ll long long
// kadan's algoritn
ll kadanssum(int *arr,int n){
    ll maxi=INT_MIN;
    ll currentsum=0;
    for(int i=0; i<n; i++){
        // 3 step to implement the kadan's algorithm
        currentsum=currentsum+arr[i];
        maxi=max(maxi,currentsum);
        if(currentsum < 0) currentsum=0;
    }
    return maxi;
}

ll maximumsubarraysum(int *arr,int n,int k){
   int kadanssumvalue=kadanssum(arr,n);
   if(k==1) return kadanssumvalue;
   int current_pref_sum=0,current_suff_sum=0;
   int max_pref_sum=INT_MIN,max_suff_sum=INT_MIN;

   for(int i=0; i<n; i++){
    current_pref_sum=current_pref_sum+arr[i];
    max_pref_sum=max(max_pref_sum,current_pref_sum);

   }
   ll totalsum=current_pref_sum;
   for(int i=n-1; i>=0; i--){
    current_suff_sum=current_suff_sum+arr[i];
    max_suff_sum=max(max_suff_sum,current_suff_sum);
   }
   
}

int main(){
    int t; cin>>t;
    for(int i=1; i<=t; i++){
        int n,k; cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];

        cout<<maximumsubarraysum(arr,n,k);
    }
}