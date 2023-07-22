/*
PBL --> https://codeforces.com/problemset/problem/1828/A
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
         if(n%2==0)
         {
             for(int i=1; i<=n; i++)
             {
                 int x=i*2;
               v[i]=x;
             }
         }
         else
         {
             for(int i=1; i<=n; i++)
             {
                v[i]=i;
             }
         }
         for(int i=1; i<=n; i++)
         {
             cout<<v[i]<<" ";
         }
         cout<<endl;
    }
}
