/*
PBL  -->  https://codeforces.com/contest/1843/problem/0
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
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }

         sort(a.begin(),a.end());
       int i=0,j=n-1,ans=0;
       while(i<=j)
       {
           int mx=a[j]-a[i];
           ans +=mx;
           i++;
           j--;
       }
        cout<<ans<<endl;
        ans=0;
    }
}
