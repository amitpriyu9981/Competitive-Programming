#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// rotate array function
void rotatearray(int *arr,int n,int d){
    int temp[d];
    for(int i=0; i<d; i++) temp[i]=arr[i];
    int j=0;
    for(int i=d; i<n; i++) arr[j++]=arr[i];
    j=0;
    for(int i=n-d; i<n; i++) arr[i]=temp[j++];
}

int main(){
    int n; cin>>n; int *arr=new int[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int d; cin>>d;
    rotatearray(arr,n,d);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}