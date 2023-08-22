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
        vector<int>v(n);
        vector<pair<int,int>>x;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        vector<int>a;
        for(int i=0; i<n; i++)
        {
            if(v[i]%k==0)
            {
                a.push_back(i+1);
            }
            else
            {
                x.push_back({v[i]%k,(i+1)});
            }
        }
        sort(x.begin(),x.end(),[&](pair<int,int>x,pair<int,int>y)
        {
            if(x.first==y.first)
            {
                return (x.second<y.second);
            }
            return (x.first>y.first);
        });
       for(auto it:x)
       {
           a.push_back(it.second);
       }
        for(int i=0; i<a.size(); i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
