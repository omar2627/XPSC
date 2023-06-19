/*
PBL  -->  https://codeforces.com/contest/1790/problem/C
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
    cin>>n;
    vector<vector<int>>v;
    map<int,int>mp;
            v.resize(n, vector<int>(n - 1));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
          cin>>v[i][j];
        }
    mp[v[i][0]]++;
    }
    for(int i=0; i<n; i++)
    {
        if(mp[v[i][0]]==1)
        {
            if(i!=0)
            {
                cout<<v[i-1][0]<<" ";
            }
            else if(i==0)
                {
                    cout<<v[i+1][0]<<" ";
                }
        }
        for(int j=0; j<n-1; j++)
        {
            if(mp[v[i][0]]==1)
            {
                cout<<v[i][j]<<" ";
            }
        }
        if(mp[v[i][0]]==1)
        {
            break;
        }
    }
    cout<<endl;
    }
}

