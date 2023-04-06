#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(char input[]){
    int i=0; int j=strlen(input);
    if(j==0 or j==1) return true;
    while(i<j){
        if(input[i]==input[j-1]){
           input[j-1]='\0';
           return ispalindrome(input+1);
        }
        else return false;
    }
}

int main(){
    
    char input[100]; cin>>input;
    if(ispalindrome(input)) cout<<"true";
    else cout<<"false";
    
    return 0;
}