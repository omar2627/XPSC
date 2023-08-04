/*
PBL --> https://codeforces.com/problemset/problem/276/C
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;cin>>n>>q;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    deque<int>dq;
     sort(v.begin(),v.end(),greater<>());
     for(int i=0; i<n; i++)
     {
         if(i%2==0)
         {
             dq.push_back(v[i]);
         }
         else
         {
             dq.push_front(v[i]);
         }
     }
     vector<int>ps(n);
     vector<int>cp;
     while(!dq.empty())
     {
         int val=dq.front();
         cp.push_back(val);
         dq.pop_front();
     }

     ps[0]=cp[0];
     for(int i=1; i<cp.size(); i++)
     {
         ps[i]=ps[i-1]+cp[i];
     }
     long long sum=0;
     for(int i=1; i<=q; i++)
     {
         int l,r;
         cin>>l>>r;
         if(l==1)
         {
             sum +=ps[r-1];
         }
     else
     {
                  sum +=ps[r-1]-ps[l-2];
     }
     }
     cout<<sum<<endl;
}
