/*
PBL --> https://codeforces.com/contest/1859/problem/B
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<vector<long long>>v(n);
        for(int i=0; i<n; i++)
        {
            int m;cin>>m;
            for(int j=0; j<m; j++)
            {
                long long val;
                cin>>val;
            v[i].push_back(val);
            }
        }
        for(int i=0; i<n; i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        vector<long long>a1,a2;
        for(int i=0; i<n; i++)
        {
            a1.push_back(v[i][0]);
            a2.push_back(v[i][1]);
        }
        sort(a1.begin(),a1.end());
        sort(a2.begin(),a2.end(),greater<>());
        long long sum=0;
         sum+=a1[0];
        for(int i=0; i<n-1; i++)
        {
            sum +=a2[i];
        }
        cout<<sum<<endl;
    }
}
