/*
Min. Absolute Difference In Array
Send Feedback
Given an integer array A of size N, find and return the minimum absolute difference between any two elements in the array.
We define the absolute difference between two elements ai and aj (where i != j ) as |ai - aj|.
Input format :
The first line of input contains an integer that denotes the number of test cases. Let us denote it by the symbol T. 
Each of the test cases contain two lines. The first line of each test case contains an integer, that denotes the value of N. The following line contains N space separated integers, that denote the array elements.
Constraints :
1 <= T <= 10
2 <= N <= 10^5
0 <= arr[i] <= 10^8
Output Format :
You have to print minimum difference for each test case in new line.
Sample Input 1:
1
5
2 9 0 4 5
Sample Output 1:
1

*/
#include<bits/stdc++.h>
using namespace std;

int getmindifference(vector<int> v, int n){

    // step -1 sort the vector v
    sort(v.begin(),v.end());
    int mindiff=1e9;
    for(int i=1; i<n; i++){
        mindiff=min(mindiff,(v[i]-v[i-1]));
    }
    return mindiff;
}

void solve(){
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  int ans = getmindifference(v, n);
  cout<<ans;
  cout << endl;
}
int main(){
    
    int t; cin>>t;
    for(int i=1; i<=t; i++){
        solve();
    }
    return 0;
}