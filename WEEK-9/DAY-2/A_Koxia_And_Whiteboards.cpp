/*
PBL --> https://codeforces.com/problemset/problem/1770/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<long long>v(n);
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum +=v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0; i<m; i++)
        {
        long long x;
        cin>>x;
        sum +=x;
        sum -=v[0];
        v[0]=x;
        sort(v.begin(),v.end());
        }
        cout<<sum<<endl;
        }
}
