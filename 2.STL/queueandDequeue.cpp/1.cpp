#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    
    deque<int> d;
    d.push_back(10);                // 10 20 30 40 
    d.push_back(20);
    d.push_front(30);
    d.push_front(40);
    while(!d.empty()){
        cout<<d.front()<<" ";   // 40 30 20 10
        d.pop_front();
    }
    cout<<endl;
    return 0;
}