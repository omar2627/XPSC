/*
PBL --> https://codeforces.com/problemset/problem/158/A?fbclid=IwAR22QXzoipQO1NjA7FRwQ1lAZih04qp4_4zTaRXjI78pzuCMNZppYxlKlbs
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ans2=0;
    int ans1=0;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;

     if(i==k && x!=0)
     {
         ans1=x;
     }
     else if(ans1==x && i>=k && ans1>0)
     {
         ans2=i;
     }
     else if(i>=k && ans2==0 && ans1>0)
     {
         ans2=k;
     }
     else if(x==0 && i==1)
     {
         ans2=-1;
     }
     else if( x==0 && ans2==0 )
     {
         ans2=i-1;
     }
     else
     {
         continue;
     }
}
if(ans2==-1)
{
    cout<<0<<endl;
}
else
{
    cout<<ans2<<endl;
}
}
