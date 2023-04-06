#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int allIndexes(int input[], int size, int x, int output[]) {
  
  if(size==0) return 0;

  // recursive call
  int smallans=allIndexes(input+1,size-1,x,output);

  // if x is also at the oth index then we have to increment and do a right shift 
  // else just increment and return
  if(input[0]==x){
       for(int i=smallans-1; i>=0; i--){
         output[i]++;
         output[i+1]=output[i];
       }
       output[0]=0;
       return smallans+1;
  }
  else{
    for(int i=smallans-1; i>=0; i--){
      output[i]++;
    }
    return smallans;
  }

}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}