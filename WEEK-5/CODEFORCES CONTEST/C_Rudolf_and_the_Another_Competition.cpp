/*
PBL --> https://codeforces.com/contest/1846/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,h;
        cin>>n>>m>>h;
        vector<vector<int>>v(n,vector<int>(m));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>v[i][j];
            }
        }
        vector<int>vt;
        int op=0,trk=0,mn=0;
        for(int i=0; i<n; i++)
        {

            for(int j=0; j<m; j++)
            {
                mn +=v[i][j];
               if(mn<=h)
               {
                   op++;
               }
            }
            if(i==0)
            {
                trk=op;
            }
            mn=0;
            vt.push_back(op);
        }
        sort(vt.begin(),vt.end());
        reverse(vt.begin(),vt.end());
        for(int i=0; i<vt.size(); i++)
        {
            if(vt[i]==trk)
            {
                cout<<i+1;
                break;
            }
        }
        trk=0;
        op=0;
        v.clear();
        vt.clear();
    }
}
