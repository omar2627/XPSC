/*
PBL --> https://codeforces.com/contest/1857/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
     vector<int>v;
     while(x>0)
     {
         x=x%10;
         v.push_back(val);
         x=x/10;
     }
     reverse(v.begin(),v.end());
     if(v[0]==9)
     {
         cout<<1;
         for(int i=1; i<val.size(); i++)
         {
             cout<<0;
         }
         cout<<endl;
     }
     else
     {
         bool ans=true;
         for(int i=0; i<val.size(); i++)
         {
             if(v[i]>=5)
             {
                 ans=false;
                 idx=i;
                 break;
             }
         }
         if(ans)
         {
             cout<<x<<endl;
         }
         else
         {
             for(int i=idx; i<val.size(); i++)
             {
                 val[i]=0;
             }

         }
     }
    }
}
