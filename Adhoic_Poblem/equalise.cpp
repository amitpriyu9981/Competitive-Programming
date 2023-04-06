#include<iostream>
using namespace std;

void solve(){
    int n; cin>>n;
    string a,b; cin>>a>>b;
    int totalcost=0;
    for(int i=0; i<n;){
        if(a[i]!=b[i]){
            // swap and flip
            if(i+1<n and a[i]!=a[i+1] and a[i+1]!=b[i+1]){
                // swapping and cost is also 1 only
                totalcost++;
                i=i+2;
            }
            else{
                i++;
                totalcost++;
            }

        }
        else{
            i++;
        }
    }
    cout<<totalcost<<"\n";
}

int32_t main(){
    solve();
}