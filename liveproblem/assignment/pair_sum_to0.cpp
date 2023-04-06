// problem statement :- pair sum to 0

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getpairsum(int *arr,int n){
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            count++;
        }
    }
    return count;
}

int main(){

    int n; cin>>n; int *arr=new int[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int ans=getpairsum(arr,n);
    cout<<ans<<"\n";
    return 0;
}