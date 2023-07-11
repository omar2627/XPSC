/*
PBL --> https://codeforces.com/contest/1742/problem/D
n=6
18 dore korle ans ashe 6+1=7 ,, 8,9 diye korle ans ashe 4+5=9
1 2 4 8 9 18
*/


#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>cp[1111];

        for(int i=1; i<=1000; i++)
    {
        for(int j=1; j<=1000; j++)
        {
            if(__gcd(i,j)==1)
            {
                cp[i].push_back(j);
            }
        }

    }
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
       vector<int>mxIdx(1111,-1);
       for(int i=1; i<=n; i++)
       {
           mxIdx[v[i]]=i;
       }
       int ans=0;
       for(int i=1; i<=1000; i++)
       {
           if(mxIdx[i]==-1)
           {
               continue;
           }
           if(i==1)
           {
               ans=max(ans,mxIdx[i]*2);
           }
           for(auto it:cp[i])
           {
               if(mxIdx[it]!=-1)
               {
                   ans=max(ans,mxIdx[i]+mxIdx[it]);
               }
           }
       }
       if(ans==0)
       {
           cout<<-1<<endl;
       }
       else
       {
           cout<<ans<<endl;
       }
    }
}
