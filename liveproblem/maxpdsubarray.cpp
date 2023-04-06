#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


// #define int long long
#define endl cout<<"\n"
int maxpdsubarray(vector<int> &a,int n){
    int max_ending_here=1;
    int min_ending_here=1;
    int max_so_far=0;
    for(int i=0; i<n; i++){
        // case-1
        if(a[i]>0){
            max_ending_here=max_ending_here*a[i];
            min_ending_here=min(min_ending_here*a[i],1);
        }
        else if(a[i]==0){
            // case-2
            max_ending_here=1;
            min_ending_here=0;
        }else{
            // case-3 for the negative values
            int temp=max_ending_here;
            max_ending_here=max(min_ending_here*a[i],1);
            min_ending_here=temp*a[i];
        }
        // update the max so far
        max_so_far=max(max_so_far,max_ending_here);
    }
    return max_so_far;
}
int32_t main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int output=maxpdsubarray(a,n);
    cout<<output;
    endl;
}