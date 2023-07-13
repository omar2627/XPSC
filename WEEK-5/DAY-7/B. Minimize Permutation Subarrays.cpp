/*
PBL --> https://codeforces.com/contest/1838/problem/B
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
        vector<int>v(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }
        vector<int>pos(n+1,0);

        int idx1=0,idx2=0,mxidx=-1;
        for(int i=1; i<=n; i++)
        {
          pos[v[i]]=i;
        }
int l,r;
        if(pos[n]>min(pos[1],pos[2]) && pos[n]<max(pos[1],pos[2]))
        {
            l=pos[1];
            r=pos[2];
        }
        else if(pos[n]<pos[1] && pos[2]>pos[1])
        {
          l=pos[1];
          r=pos[n];
        }
        else if(pos[n]<pos[2] && pos[2]<pos[1])
        {
            l=pos[2];
            r=pos[n];
        }
        else if(pos[n]>pos[2]&&pos[2]>pos[1])
        {
            l=pos[2];
            r=pos[n];
        }
        else if(pos[n]>pos[1] && pos[2]<pos[1])
        {
            l=pos[1];
            r=pos[n];
        }
cout<<l<<" "<<r<<endl;
    }
}
