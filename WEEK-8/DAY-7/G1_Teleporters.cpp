/*
PBL --> https://codeforces.com/problemset/problem/1791/G1
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n,c;
        cin>>n>>c;
        vector<long long>v;
        for(int i=1; i<=n; i++)
        {
            long long num;cin>>num;
            long long sum=num+i;
            v.push_back(sum);
        }
        if(n==1 && v[0]<=c)
        {
            cout<<1<<endl;
        }
        else
        {
               sort(v.begin(),v.end());
        int cnt=0;
  long long sum=c;
  int i=0;
  while(sum && i<n)
  {
      long long val=v[i];
     if(sum>=val)
     {
         cnt++;
         sum=sum-val;
         i++;
     }
     else
     {
         break;
     }
  }
        cout<<cnt<<endl;
        }

    }
}
