#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl cout<<"\n"
#define ret return 0
struct job{
   int starttime,finishtime,value;
};
// sort function-- sort on the basic of the finish time
bool comp(job a,job b) {
    return a.finishtime<b.finishtime;
}
int MaxProfit(job arr[],int n){
    sort(arr,arr+n,comp);
    int *dp=new int[n];
    dp[0]=arr[0].value;
    for(int i=1; i<n; i++){
        int including=arr[i].value;
        int lnconfliting=-1;
        for(int j=i-1; j>=0; j--){
            if(arr[j].finishtime <= arr[i].starttime){
                lnconfliting=j;
                break;
            }
        }
        if(lnconfliting != -1){
            including +=dp[lnconfliting];
        }
        dp[i]=max(including,dp[i-1]);
    }
    int output=dp[n-1];
    delete [] dp;
    return output;
}
int32_t main(){
    int n;cin>>n;
    job *arr=new job[n];
    for(int i=0; i<n; i++){
        cin>>arr[i].starttime;
        cin>>arr[i].finishtime;
        cin>>arr[i].value;
    }
    cout<<"Maximum Profit is "<<MaxProfit(arr,n);
    endl;
    ret;

}
/*
PROBLEM STATEMENT:-
Weighted Job Scheduling
Send Feedback
You are given N jobs where every job is represented as:
1. Start Time
2. Finish Time
3. Profit Associated
Find the maximum profit subset of jobs such that no two jobs in the subset overlap.
Input Format:
The first line of input contains an integer denoting N.
Next N lines contains three space separated integers denoting the start time, finish time and the profit associated with the ith job. 
Constraints:
1 ≤ N ≤ 10^6
1 ≤ ai, di, p ≤ 10^6
Output Format:
Output one integer, the maximum profit that can be achieved.
Sample Input 1
4
3 10 20
1 2 50
6 19 100
2 100 200
Sample Output 1
250


*/