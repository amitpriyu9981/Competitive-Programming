#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,target; cin>>n>>target;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    if(a.size()==0){
        cout<<-1<<" "<<-1<<"\n";
    }
    int left=lower_bound(a.begin(),a.end(),target)-a.begin();
    int right=upper_bound(a.begin(),a.end(),target)-a.begin();
    if(left>=n){
        cout<<-1<<" "<<-1<<"\n";
    }
    if(a[left]==target){
        cout<<left<<" "<<right-1<<"\n";
    }
    else{
        cout<<-1<<" "<<-1<<"\n";
    }
    return 0;
}

/*
#include<bits/stdc++.h>
pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
	if(n==0){
        pair<int,int> p;
        p.first=-1;
        p.second=-1;
        return p;
    }
    int leftindex=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
    int rightindex=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
    // if(leftindex>=n){
    //   pair<int, int> p;
    //   p.first = -1;
    //   p.second = -1;
    //   return p;
    // }
    if(arr[leftindex]==x){
        pair<int,int> p;
        p.first=leftindex;
        p.second=rightindex-1;
        return p;
    } else {
      pair<int, int> p;
      p.first = -1;
      p.second = -1;
      return p;
    }
}


*/