#include<iostream>
#include<unordered_map>
#include<utility>
#include<algorithm>
#include<vector>

using namespace std;


#define ll long long
#define int long long
#define vi vector<ll>
#define endl cout<<"\n"
#define mp map<int,int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>> 
#define ump unordered_map<int,int>
#define sortvector(a) sort(a.begin(),a.end())
#define f(i,s,e) for(int i=s; i<e; i++)


vector<pair<int,int> > twosum(vi &a,int x,int n){
   ump mm;
   pii p1;
   vpii vec;
   f(i,0,n){
    mm[a[i]]++;
   }
   f(i,0,n){
     int first_term=a[i];
     int secondterm=(x-a[i]);
    if(first_term ==secondterm){
       if(mm[first_term]>1){
         p1=make_pair(first_term,secondterm);
         vec.push_back(p1);
         mm[first_term]=mm[first_term]-2;
       }
    }
    else if(first_term != secondterm){
        if((mm[first_term]>0) and (mm[secondterm])>0){
            p1=make_pair(first_term,secondterm);
            vec.push_back(p1);
            mm[first_term]--;
            mm[secondterm]--;
        }
    }
   }
   if(vec.empty()){
    p1=make_pair(-1,-1);
    vec.push_back(p1);

   }
   return vec;
}


// int32_t main(){
    
//     int n; int target; cin>>n>>target;
//     vi a(n);
//     f(i,0,n) cin>>a[i];
//     vpii ans=twosum(a,target,n);
//     for(auto i:ans){
//         if(i.first < i.second){
//             cout<<i.first<<" "<<i.second<<"\n";
//         }else{
//             cout<<i.second<<" "<<i.first<<"\n";
//         }
//     }
    
//     return 0;
// }


int32_t main(){
    int n; cin>>n; int target; cin>>target;
    vi a(n);
    f(i,0,n)  cin>>a[i];
    
    ump m;
    f(i,0,n){
        if(m.count(target-a[i])==0){
           // element is not found in the map
           m[a[i]]=i;
        }
        else{
            cout<<i<<" "<<m[target-a[i]]<<"\n";
            return 0;
        }
    }
    cout<<-1<<" "<<-1;
    endl;
    return 0;
}
