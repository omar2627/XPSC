/*
PBL --> https://www.codechef.com/problems/MAKE_AB_SAME
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
        vector<int>v(n),a(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(v[n-1]!=a[n-1] || v[0]!=a[0])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            bool ans=true;
            for(int i=0; i<n; i++)
            {
                if(a[i]==0 && v[i]==1)
                {
                    cout<<"NO"<<endl;
                    ans=false;
                    break;
                }
            }
        if(ans)
        {
                     int cnt1=0,cnt2=0;
         for(int i=0; i<n; i++)
         {
             if(v[i]==1)
             {
                 cnt1++;
             }
             if(a[i]==1)
             {
                 cnt2++;
             }
         }
         if(cnt2==0 && cnt1>0)
         {
             cout<<"NO"<<endl;
         }
         else if(cnt1==0 && cnt2>0)
         {
             cout<<"NO"<<endl;
         }
         else
         {
             cout<<"YES"<<endl;
         }
        }
        }
    }
}
