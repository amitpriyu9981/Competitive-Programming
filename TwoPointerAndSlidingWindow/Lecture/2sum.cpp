
/*
You are given an array of integers 'ARR' of length 'N' and an integer Target. Your task is to return all pairs of elements such that they add up to Target.
Note:
We cannot use the element at a given index twice.
Follow Up:
Try to do this problem in O(N) time complexity. 
####Input Format:

The first line of input contains an integer ‘T’ denoting the number of test cases to run. Then the test case follows.

The first line of each test case contains two single space-separated integers ‘N’ and ‘Target’ denoting the number of elements in an array and the Target, respectively.

The second line of each test case contains ‘N’ single space-separated integers, denoting the elements of the array.
Output Format :
For each test case, print a single line containing space-separated integers denoting all pairs of elements such that they add up to the target. A pair (a, b) and (b, a) is the same, so you can print it in any order.

Each pair must be printed in a new line. If no valid pair exists, print a pair of (-1, -1). Refer to sample input/output for more clarity.
Note:
You do not need to print anything; it has already been taken care of. Just implement the given function.
Constraints:
1 <= T <= 100
1 <= N <= 5000
-10 ^ 9 <= TARGET <=10 ^ 9
-10 ^ 9 <= ARR[i] <=10 ^ 9

Where 'T' denotes the number of test cases, 'N' represents the size of the array, 'TARGET' represents the sum required, and 'ARR[i]' represents array elements.

Time Limit: 1 sec.
Sample Input 1 :
2
4 9
2 7 11 13
5 1
1 -1 -1 2 2
Sample Output 1:
2 7
-1 2
-1 2
Explanation for Sample 1:
For the first test case, we can see that the sum of  2 and 7 is equal to 9 and it is the only valid pair.

For the second test case, there are two valid pairs (-1,2) and (-1,2), which add up to 1.
Sample Input 2 :
1
4 16
2 7 11 13
Sample Output 2 :
-1 -1
*/
#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#define ll long long
using namespace std;
 
 
void precal(){
}
 
void solve(){
    int n,target;
    cin>>n>>target;
    
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // make sure that the vector should be in the sorted order
    int start=0,end=n-1;
    while(start<end){
        if(a[start]+a[end]>target) end--;
        else if(a[start]+a[end]<target) start++;
        else{
            cout<<start<<" "<<end<<"\n";
            return;
        }
    }
    cout<<-1<<" "<<-1<<"\n";
}   
 
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            precal();
            int t=1;
            // cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";  
                solve();
    }
    return 0;
}