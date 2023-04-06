#include<bits/stdc++.h>
using namespace std;
#define endl cout<<"\n"
struct item{
    int value,weight;
};
// sort acc to value/weight in descreasing order
bool compare(struct item a,struct item b){
    double value1=((double)a.value)/a.weight;
    double value2=((double)b.value)/b.weight;
    return value1 > value2;
}
double fknapsack(struct item arr[],int w,int n){
    sort(arr,arr+n,compare);
    double currentweight=0;
    double finalvalue=0;
    for(int i=0; i<n; i++){
        if(currentweight +arr[i].weight <=w){
            // whole weight should be included
            currentweight +=arr[i].weight;
            finalvalue +=arr[i].value;
        }else{
            // only fractional part should be included
            double remainingweight=w-currentweight;
            finalvalue +=arr[i].value *((double)remainingweight/arr[i].weight);
            break;
        }
    }
    return finalvalue;
}

int main(){
    
    int n,w; cin>>n>>w;
    item *arr=new item[n];
    for(int i=0; i<n; i++){
        cin>>arr[i].value>>arr[i].weight;
    }
    cout << fixed << setprecision(6) << fknapsack(arr, w, n);

    endl;
    return 0;
}


/*

Fractional Knapsack
Send Feedback
You are given weights and values of N items. You have to select and put these selected items in a knapsack of capacity W. Select the items in such a way that selected items give the maximum total value possible with given capacity of the knapsack.
Note: You are allowed to break the items in parts.
Input Format:
The first line of input contains two space separated integers, that denote the value of N and W.
Each of the following N lines contains two space separated integers, that denote value and weight, respectively, of the N items.    
Constraints:
1 <= N = 2*10^5
1 <= W <= 10^9
1 <= value, weight <= 10^5
Time Limit: 1 sec
Output Format:
Print the maximum total value upto six decimal places.
Sample Input 1:
4 22
6 4
6 4
4 4
4 4
Sample Output 1:
20.000000
Explanation:
The total weight of all the items is 16 units, which is less than the total capacity of knapsack, i.e 22 units. Hence, we will add all the items in the knapsack and total value will be 20 units.


*/