#include<iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define int long long
#define vi vector<ll>
#define endl cout<<"\n"
#define sortvector(a) sort(a.begin(),a.end())
#define f(i,s,e) for(int i=s; i<e; i++)

char getfirstrepeatingchar(string str){
    map<char,int> freq;
    for(int i=0; i<str.length(); i++){
        char currentchar=str[i];
        freq[currentchar]++;
    }
    for(int i=0; i<str.length(); i++){
        if(freq[str[i]]==1){
            return str[i];
        }
    }
    return str[0];
}

void solve(){
    string str;
    cin>>str;
    char ans=getfirstrepeatingchar(str);
    cout<<ans;
    endl;
}

int32_t main(){
    int t=1;
    for(int i=1; i<=t; i++){
        solve;
    }
    return 0;
}