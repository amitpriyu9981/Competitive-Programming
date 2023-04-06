#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
char getchar(int i){
    return (char)(i+97);
}

void printpalindromicstring(string s){
    // map of char and vector of indexes
    map<char,vector<int>> indexmap;
    for(int i=0; i<s.length(); i++){
        // i is the index of the character
       indexmap[s[i]].push_back(i);
    }
    // case-2 if two character of odd freq
    // we can't make the palindromic string
    int odd_freq_count=0;
    for(int i=0; i<25; i++){
        if((indexmap[getchar(i)].size() %2 ) !=0 ){
            odd_freq_count++;
        }
    }
    if(odd_freq_count >=2 ){
        cout<<"-1";
        cout<<endl;
        return;
    }
    int ans[s.length()];
    int start=0;
    int end=s.length()-1;
    for(int i=0; i<26; i++){
        char currentcharacter=getchar(i);
        for(int j=0; j<indexmap[currentcharacter].size(); j+=2){  // j+=2 because one character push at the beginning and one character put at the end, so we have to take jump of 2-2 character
           
           // here we have to push the index
           if((indexmap[currentcharacter].size()-j)==1){
            // we have to put that odd freq character into the middle of the ans output array
            ans[s.length()/2]=indexmap[currentcharacter][j];
            // now just continue
            continue;
           }
           // this is for sure correct for the even  frequency element
           ans[start]=indexmap[currentcharacter][j];
           ans[end]=indexmap[currentcharacter][j+1];
           start++;
           end--;
        }
     
    }
    for(int i=0; i<s.length(); i++){
            cout<<ans[i]+1<<" ";
    }
    cout<<endl;
    return;
}


int main(){
    int t; cin>>t;
    for(int i=1; i<=t; i++){
       string str; cin>>str;
       printpalindromicstring(str);
       cout<<endl;
    }
    return 0;
}