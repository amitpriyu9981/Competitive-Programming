#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define endl cout<<"\n"
#define int long long
void solve(){
    // step-1 Take input
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    // find maximum and minimum
    int maxi=*max_element(v.begin(),v.end());
    int mini=*min_element(v.begin(),v.end());

    // initilise the vecto with the min no of elements of diff
    // between minimum and maximum number
    vector<int> freq(maxi-mini+2); // 2 is only for the buffer 
    // update the frequency of each element and shifted by the min numbwer
    for(int i=0; i<n; i++) freq[v[i]-mini]++;
    // print the sorted array and before printing it shift the min
    // numbwer to the orginal form by adding just mini to it while printing\
    
    for(int i=0; i<freq.size(); i++){
        for(int j=0; j<freq[i]; j++){
            cout<<(i+mini)<<" ";
        }
    }
    endl;
} 
int32_t main(){

    solve();
    return 0;
}