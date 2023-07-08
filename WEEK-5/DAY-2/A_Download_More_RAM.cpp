/*
PBL -->  https://codeforces.com/contest/1629/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n,k;
         cin>>n>>k;
         vector<int>v1(n),v2(n);
         for(int i=0; i<n; i++)
         {
             cin>>v1[i];
         }
         for(int i=0; i<n; i++)
         {
             cin>>v2[i];
         }
         int tRam=k;
         for(int i=0; i<n; i++)
         {
             int x=0;
             for(int j=0; j<n; j++)
             {
                 if(v1[j]<=tRam&&v1[j]>0)
                 {
                     x +=v2[j];
                     v1[j]=-1;
                 }
             }
             tRam +=x;
         }
         cout<<tRam<<endl;
    }
}
