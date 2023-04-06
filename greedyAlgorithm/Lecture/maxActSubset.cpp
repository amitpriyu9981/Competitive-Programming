#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define endl cout<<"\n"
class interval{
    public:
    int start,end;
};
bool comp(interval a,interval b){
    return a.end<b.end;
}
void solve(){
    int n; cin>>n;
    interval arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i].start;
        cin>>arr[i].end;
    }
    // sort the interval  array on the basic of their end time 
    sort(arr,arr+n,comp);
    int count=1;
    int currentend=arr[0].end;
    for(int i=1; i<n; i++){
        if(arr[i].start>=currentend){
            count++;
            currentend=arr[i].end;
        }
    }
    cout<<count;
    endl;
}
int main(){
    
    solve();
    return 0;
}

/*

Maximum Activity Subset
Send Feedback
You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.
Input Format
The first line of input contains one integer denoting N.
Next N lines contains two space separated integers denoting the start time and finish time for the ith activity. 
Constraints
1 ≤ N ≤ 10^6
1 ≤ ai, di ≤ 10^9
Output Format
Output one integer, the maximum number of activities that can be performed
Sample Input 1
6
1 2
3 4
0 6
5 7
8 9
5 9
Sample Output 1
4
Explanation:
The four activities will be done at following time intervals:
1. 1 2
2. 3 4
3. 5 7
4. 8 9


*/