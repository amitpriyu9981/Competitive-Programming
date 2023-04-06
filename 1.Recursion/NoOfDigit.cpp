#include<bits/stdc++.h>
using namespace std;


int count(int n){
    //base case
    if(n==0){ return 0; }

    // Recursive call
    int small=count(n/10);
    return small+1;
}

int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}