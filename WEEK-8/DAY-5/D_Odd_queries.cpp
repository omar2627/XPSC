/*
PBL ---> https://codeforces.com/contest/1807/problem/D
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>v(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }
        vector<int>pSum(n+1);
        pSum[1]=v[1];
        for(int i=2; i<=n; i++)
        {
            pSum[i]=pSum[i-1]+v[i];
        }

      while(q--)
      {
            int l,r,k,ans=0;
        cin>>l>>r>>k;
        int total=pSum[n];
        int minuS=0;
       if(l==1)
       {
             minuS=pSum[r];
       }
       else
       {
           minuS=pSum[r]-pSum[l-1];
       }
        total=total-minuS;
        ans=(r-l)+1;
        ans=ans*k;
        total +=ans;
        if(total%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        total=0;
        ans=0;
      }
    }
}
