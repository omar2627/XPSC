/*
PBL --> https://codeforces.com/contest/1849/problem/B
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long k;
        cin>>n>>k;
        vector<long long>v(n);
        vector<int>a;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(int i=0; i<n; i++)
        {
            if(v[i]==k)
            {
                a.push_back(i+1);
            }
        }
        for(int i=0; i<a.size(); i++)
        {
            cout<<a[i]<<" ";
        }
        for(int i=0; i<n; i++)
        {
            if(v[i]==k)
            {
                continue;
            }
            else
            {
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }
}
