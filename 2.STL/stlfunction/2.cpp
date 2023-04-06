#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n; vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];  // 5 - 1 6 4 7 9
    
    // for the binary-search lower-bound and upper-bound , vector should be sorted
    sort(a.begin(),a.end());

    // Binary Search
    // if(binary_search(a.begin(),a.end(),5)) cout<<"yes , present"<<"\n";
    // else cout<<"no, not present "<<endl;

    for(int i=0; i<n; i++) cout<<a[i]<<" "<<"\n";
    cout<<"case1 "<<lower_bound(a.begin(),a.end(),3)-a.begin()<<"\n";
    cout<<"case-2 "<<lower_bound(a.begin(),a.end(),4)-a.begin()<<"\n";
    cout<<"case-3 "<<lower_bound(a.begin(),a.end(),10)-a.begin()<<"\n";
    cout<<"case-4 "<<upper_bound(a.begin(),a.end(),3)-a.begin()<<"\n";
    cout<<"case-5 "<<upper_bound(a.begin(),a.end(),4)-a.begin()<<"\n";
    cout<<"case6"<<upper_bound(a.begin(),a.end(),10)-a.begin()<<"\n";

}