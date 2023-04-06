#include<iostream>
#include<bits/stdc++.h>


#define ll long long
using namespace std;

bool checkOverlappingIntervals(long* start, long* end, int n)
{
    vector<pair<int,int> > v(n);
    for(int i=0; i<n; i++){
        v[i].first=start[i];
        v[i].second=end[i];

    }
    sort(v.begin(),v.end());
    for(int i=0; i<n-1; i++){
        // overlapping condition
        if(v[i].second > v[i+1].first) return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long *start = new long[n];
        long *end = new long[n];

        for (int i = 0; i < n; ++i)
        {
            cin >> start[i];
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> end[i];
        }

        if (checkOverlappingIntervals(start, end, n))
        {
            cout << "true\n";
        }
        else
        {
            cout << "false\n";
        }

        delete start;
        delete end;
    }
}