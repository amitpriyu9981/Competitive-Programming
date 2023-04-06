#include<bits/stdc++.h>
using namespace std;


void print(int n){
    
    // base case
    if(n==0)
       return;
    // Recursive call
    print(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin >> n;
  
    print(n);
}