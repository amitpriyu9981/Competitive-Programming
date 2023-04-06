
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool cmp(int &a,int &b){
    return a>b;
}

int main(){
    int n; cin>>n; vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    string str; cin>>str;
    cout<<"vector"<<"\n";
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<"\n";
    cout<<"string:- "<<str<<"\n";

    // Reverse string and a vector
    reverse(str.begin(),str.end());
    reverse(a.begin(),a.end());
    cout<<"String and vector are reverse "<<"\n";
    cout<<"vector"<<"\n";
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<"\n";
    cout<<"string:- "<<str<<"\n";

    // max and min element in the vector
    cout<<"max value in the vector is  "<<*max_element(a.begin(),a.end())<<"\n";
    cout<<"min value in the vector is  "<<*min_element(a.begin(),a.end())<<"\n";

    // max and min of 3 number
    int x=19; int y=34; int z=394;
    cout<<"max of 3 number is "<<max({x,y,z})<<"\n";
    cout<<"min of 3 element is "<<min({x,y,z})<<"\n";

    // accumulator function --it will give the sum of the value in the vector
    cout<<"sum of all the number in the vector is "<<accumulate(a.begin(),a.end(),0);

    // finding any element in the vector
    int pos=find(a.begin(),a.end(),3)-a.begin();
    if(pos<n) cout<<"3 is found at the index: "<<pos<<"\n";
    else cout<<"3 is not found ! "<<"\n";
    pos=find(a.begin(),a.end(),9)-a.begin();
    if(pos<n) cout<<"9 is found at the index "<<pos<<"\n";
    else cout<<"9 is not found !"<<"\n";

    // sort the vector
    cout<<"sort the vector in the ascending order: "<<"\n";
    sort(a.begin(),a.end());
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<"\n";
    cout<<"sort the vector in the descending order "<<"\n";
    sort(a.begin(),a.end(),greater<int>());
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<"\n";

    // sort using the comparator function
    sort(a.begin(),a.end(),cmp);
    cout<<"sorting using the comparator function"<<"\n";
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<"\n";
    

}