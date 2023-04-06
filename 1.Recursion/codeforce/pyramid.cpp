#include<bits/stdc++.h>
using namespace std;
#define endl cout<<"\n"

int main(){
    int n; cin>>n;
    int i=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<"";
            space++;
        }
        int star=1;
        while(star<=2*i-1){
            cout<<"*";
            star++;
        }
        endl;
        i=i+1;
    }
}