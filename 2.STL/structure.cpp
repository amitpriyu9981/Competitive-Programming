#include<iostream>
#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define fr(i,a,b) for(int i=a; i<b; i++)
#define loop(x,n) for(int x=0; x<n; ++x)
#define mod 1000000007
#define all(x) (x).begin,(x).end()


using namespace std;

struct student{
    string name;
    ll roll,classnum;
    char sec;
};

void print(student s){
    cout<<s.name<<" singh is a student of class "<<s.classnum<<" "<<s.sec<<" with roll number "<<s.roll<<"\n";
}

int main(){
    student s1;
    s1.name="Priyadarshi";
    s1.roll=106121012;
    s1.classnum=12;
    s1.sec='B';

    print(s1);

}
