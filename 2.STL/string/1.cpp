#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    string str; 
    getline(cin,str);
    cout<<"Actual String is : "<<str<<"\n";
    cout<<"Length of the string is "<<str.length()<<"\n";
    cout<<"Length of the string is "<<str.size()<<"\n";

    // push and pop on the string
    str.push_back('T');
    cout<<"new string after appending character 'T' "<<str<<"\n";
    str.pop_back();
    cout<<"new string after popping the last charcter "<<str<<"\n";

    cout<<"substring "<<"\n";
    cout<<str.substr(0,0)<<"\n";
    cout<<str.substr(0,1)<<"\n";
    cout<<str.substr(0,2)<<"\n";
    cout<<str.substr(0,3)<<"\n";

}