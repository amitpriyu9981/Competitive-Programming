/*
Sort an array in wave form
Send Feedback
You have been given an unsorted array ‘ARR’.
Your task is to sort the array in such a way that the array looks like a wave array.
Example:
If the given sequence ‘ARR’ has ‘N’ elements then the sorted wave array looks like - 
‘ARR[0] >= ARR[1]’ and ‘ARR[1] <= ARR[2]’
‘ARR[2] >= ARR[3]’ and ‘ARR[3] <= ARR[4]’
‘ARR[4] >= ARR[5]’ and ‘ARR[5] <= ARR[6]’  And so on.
Note:
1. ‘ARR[0]’ must be greater than or equal to ‘ARR[1]’.

2. There can be multiple arrays that look like a wave array but you have to return only one.

3. We have an internal function that will check your solution and return 'True' in case your array is one of the solutions otherwise return 'False'.
Explanation
The given array ‘ ARR = { 4, 3, 5, 2, 3, 1, 2 } ’
The below figure is a visual representation of the given ‘ARR’ and you can see we can express ‘ARR’ in a waveform array because 
4>3 and 3<5 
5>2 and 2<3
3>1 and 1<2
And it follows the condition of wave array.
subsequence

Follow up:
Try to solve this problem in linear time complexity.
Input format:
The first line of input contains an integer ‘T’ denoting the number of test cases.
The next ‘2*T’ lines represent the ‘T’ test cases.

The first line of each test case contains the single integer ‘N’ and ‘N’ is denoting the number elements in the given ‘ARR’.

The second line of each test case contains ‘N’ space-separated elements of ‘ARR’. 
Output Format:
For each test case, print in a single line space-separated integers that represent the elements of a wave array.
Note:
You are not required to print the output explicitly, it has already been taken care of. Just implement the function.
Constraints:
1 <= T <= 50
1 <= N<= 10^4
-10^9 <= ARR[i] <= 10^9

Time limit: 1 second
Sample Input 1:
2
5 
2 3 1 4 2
6
4 3 2 5 4 1
Sample Output 1:
2 1 3 2 4
4 3 5 2 4 1
Explanation of sample input 1:
Test Case 1:
For given 'ARR' = { 2, 3, 1, 4, 2 } one possible sorted wave form array is { 2, 1, 3, 2, 4 }
subsequence

2>1 and 1<3 
3>2 and 2<4
4>2 
And it follows the condition of wave array form.

Some other possible sorted array in wave form -
3 1 2 2 4
4 1 2 2 3
4 2 3 1 2


Test case 2:

For given 'ARR' = { 4, 3, 2, 5, 4, 1 } one possible sorted wave form array is { 4, 3, 5, 2, 4, 1 }
subsequence

4>3 and 3<5 
5>3 and 2<4
4>2 and 1<4
And it follows the condition of wave array form.

Some other possible sorted array in wave form -
4 2 3 1 5 4
4 2 3 4 5 1
3 2 4 1 5 4
Sample Input 2:
2
3
3 2 1
9
3 2 1 3 2 1 3 2 1
Sample Output 2:
2 1 3
3 1 2 1 3 2 2 1 3

*/

#include<bits/stdc++.h>
using namespace std;

vector<int> getwaveform(vector<int> &arr,int n){
    // step-1 sort the given vector
    sort(arr.begin(),arr.end());
    // step -2 swap the adjacent element
    for(int i=0; i<n; i+=2){
        if(i != n-1)
          swap(arr[i],arr[i+1]);
    }
    return arr;
}
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    vector<int> output=getwaveform(a,n);
    for(int i=0; i<output.size(); i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;
    return 0;
}