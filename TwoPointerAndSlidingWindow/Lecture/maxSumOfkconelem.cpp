/*
Max Sum of K Consecutive Elements
Send Feedback
You are given an array of ‘N’ integers. You have to find the maximum sum over all subarrays of size ‘K’.
For example:
If N=3, K=2 and array elements are [ -100, 20, 40 ]. Following are the subarrays of size 2:
[ -100, 20 ] having sum = -100 + 20 = -80.
[ 20, 40 ] having sum = 20 + 40 = 60.

The maximum sum between -80 and 60 is 60. Hence, the output is 60.
Input Format :
The first line of the input contains an integer, 'T’, denoting the number of test cases.

The first line of each test case will contain two space-separated integers ‘N’ and ‘K’, denoting the size of the array and the subarray size.

The second line of each test case contains ‘N’ space-separated integers denoting elements of the array.
Output Format :
For each test case, print the maximum sum over all subarrays of size ‘K’.

Print a separate line for each test case.
Note :
You do not need to print anything, it has already been taken care of. Just implement the given function.
Constraints:
1 <= T <= 10
1 <= N <= 10000
1 <= K <= N
-10000 <= nums[i] <= 10000

Time limit: 1 sec
Sample Input 1 :
2
3 2 
-100 20 40
2 1
12 -34
Sample output 1 :
60
12
Explanation For Sample Output 1:
For the first test case,
N=3, K=2 and array elements are [ -100, 20,40 ]. Following are the subarrays of size 2:
[-100, 20] having sum = -100 + 20 = -80.
[20, 40] having sum = 20 + 40 = 60.

The maximum sum between -80 and 60 is 60. Hence, the output is 60.

For the second test case,
N=2, K=1 and array elements are [ 12, -34 ]. Following are the subarrays of size 1:
[12] having sum =12.
[-34] having sum = -34.

The maximum sum between 12 and -34  is 12. Hence, the output is 12.
Sample Input 2 :
2
5 2
7 10 -6 3 5
6 6
4 8 5 -1 -9 10
Sample output 2 :
17
17

*/


#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#define ll long long
using namespace std;
 
 
void precal(){
}
 
void solve(){
    int n,k;
    cin>>n>>k;
    int maxi=0;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    if(k>n || k<=0){
        cout<<"invalid input!"<<"\n";
        return;
    }
    
    int curr_total=0;
    for(int i=0;i<n;i++){
        if(i<k) curr_total+=a[i];
        if(i==k-1) maxi=max(maxi,curr_total);
        else if(i>=k){
            curr_total+=a[i];
            curr_total-=a[i-k];
            maxi=max(maxi,curr_total);
        }
    }
    cout<<maxi<<"\n";
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