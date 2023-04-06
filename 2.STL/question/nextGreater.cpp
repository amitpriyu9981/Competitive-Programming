#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<int> s;
        vector<long long> ans(n);
        for(int i=n-1; i>=0; i--) {
            if(arr.empty()){
                ans[i]=-1;
                s.push(arr[i]);
            }
            else{
                while(!arr.empty() and s.top()<=arr[i]) s.pop();
                if(arr.empty()){
                    ans[i]=-1;
                    s.push(arr[i]);
                }
                else{
                    ans[i]=s.top();
                    s.push(arr[i]);
                }
            }
        }
        return ans;
    }


int main(){

    int n; cin>>n;
    vector<int> a(n),b(n);
    for(int i=0; i<n; i++) cin>>a[i];

    stack<int> s;
    for(int i=n-1; i>=0; i--){
        if(s.empty()){
            b[i]=-1;
            s.push(a[i]);
        }
        else{
            while(!s.empty() && s.top()<=a[i])   s.pop();
            if(s.empty()){
                b[i]=-1;
                s.push(a[i]);
            }
            else{
                b[i]=s.top();
                s.push(a[i]);
            }

        }
    }
    for(int i=0; i<b.size(); i++){
        cout<<b[i]<<" ";
    }

    return 0;
}