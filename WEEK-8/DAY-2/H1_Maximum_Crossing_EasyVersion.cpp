/*
PBL --> https://codeforces.com/contest/1676/problem/H1
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
     int cnt=0;
     for(int i=1; i<=n; i++)
     {
         for(int j=i; j<=n; j++)
         {
             if(i==j)
             {
                 continue;
             }
             else
             {
                 if(v[i]<v[j])
                 {
                     continue;
                 }
                 else
                 {
                     cnt++;
                 }
             }
         }
     }
     cout<<cnt<<endl;
    }
}
