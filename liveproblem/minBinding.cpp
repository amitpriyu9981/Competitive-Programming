#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define endl cout<<"\n"
void print(long long  *arr,int n){
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    endl;
}
void minbind(){
    int n; cin>>n;
    
    int arr[n];
    
    long long prod[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    if(n==1){ cout<<0; endl; return;}
    // step-1 maintain the prod with the left product
    int leftproduct=1;
    for(int i=0; i<n; i++){
        prod[i]=leftproduct;
        leftproduct=leftproduct*arr[i];
    }
    // step-2 maintain the right product
    int rightproduct=1;
    for(int i=n-1; i>=0; i--){
        prod[i]=prod[i]*rightproduct;
        rightproduct=rightproduct*arr[i];
    }
    print(prod,n);
}
int main(){
    int t; cin>>t;
    for(int i=1; i<=t; i++){
        minbind();
    }
}