/*
PBL --> https://www.spoj.com/problems/EKO/fbclid=IwAR2CCiz_wINq8BicbHBIpecjLgIPJhb-_a5R7rwYC_8-7fO53V0rX_4qYlE
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long m;
    cin>>n>>m;
    vector<long long>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
   int l=0,r=v[n-1];
   while(l<=r)
   {
       int ans=l+(r-l)/2;
       int sum=0;
       for(int i=0; i<n; i++)
       {
           if(ans<=v[i])
           {
               sum +=v[i]-ans;
           }
       }
       if(sum<m)
       {
           r=ans-1;
       }
       else if(sum>m)
       {
           l=ans+1;
       }
       else
       {
           cout<<ans;
           break;
       }
   }
}
