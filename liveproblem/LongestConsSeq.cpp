#include<unordered_set>
#include<vector>
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
    // Your Code goes here
    unordered_set<int> s;
    // insert all the element into the set
    for(int i=0; i<n; i++) s.insert(arr[i]);
    // vector<int> output;
    int start = 0, mx = 0; // start indicates the start of you sequence 
    // and mx indicates mx length of sequence 
    for(int i=0; i<n; i++){
        if(s.find(arr[i]-1) != s.end()) continue; // here you did very minor mistake it should be arr[i]-1 not arr[i-1]
        else{
            int currentvalue=arr[i];
            while(s.find(currentvalue) != s.end()){
                // output.push_back(currentvalue);
                currentvalue++;
            }
            // here we will find the mx length of sequence we will update the mx length 
            // this is same as kadanes algorithm 
            if (mx < currentvalue- arr[i]) 
            {
                mx = currentvalue-arr[i];
                start = arr[i];
            }
        }
    }
    return {start, mx+start-1};
}