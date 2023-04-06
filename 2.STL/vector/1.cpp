#include<bits/stdc++.h>
using namespace std;
int main(){
 vector<int>vect;
 vect.push_back(1);
 vect.push_back(3);
 vect.pop_back();
 vect.push_back(2);
 int answer=vect.empty() ? vect.front() : vect.back();
 cout << answer;
}