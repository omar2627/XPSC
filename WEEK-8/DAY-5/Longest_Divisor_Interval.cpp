/*
PBL --> https://codeforces.com/contest/1855/problem/B
*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long n;
       cin>>n;
       if(n%2!=0)
       {
           cout<<1<<endl;
       }
       else
       {
           int cnt=0;
           int mx=0;
           for(int i=1; i<=100; i++)
           {
               if(n%i==0)
               {
                   cnt++;
               }
               else
               {
                   mx=max(cnt,mx);
                   cnt=0;
               }
           }
           cout<<mx<<endl;
       }
    }
}
