#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//  Kth largest element in the array
/*
int kthLargest(int* arr, int n, int k) {
    // Write your code here
    priority_queue<int> pq;
    for(int i=0; i<n; i++) pq.push(arr[i]);

    int cnt=1;
    while(!pq.empty() and cnt<k){
        pq.pop();
        cnt++;
    }
    return pq.top();

}
*/



int main(){
    int n,k; cin>>n>>k; vector<int> a(n); for(int i=0; i<n; i++) cin>>a[i];
    priority_queue<int> pq;
    for(int i=0; i<n; i++){
        pq.push(a[i]);
    }
    for(int i=0; i<k; i++){
        if(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
        }
    }
    cout<<"\n";
    return 0;
}