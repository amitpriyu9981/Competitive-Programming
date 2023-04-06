#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getsum(int n){
    // Base case
    if(n==0) return 0;
    return (n%10)+getsum(n/10);
}

int main(){
    
    int n; cin>>n; 
    int ans=getsum(n);
    cout<<ans<<endl;

    return 0;
}