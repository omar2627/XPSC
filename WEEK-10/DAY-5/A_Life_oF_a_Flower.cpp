/*
PBL --> https://codeforces.com/contest/1591/problem/A
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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        if(n==1)
        {
            if(v[0]==1)
            {

                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
        else
        {
                    bool ans1=true;
                   int ans=1;
           for(int i=0; i<n; i++)
           {
               if(i==0)
               {
                   if(v[i]==1)
                   {
                       ans +=1;
                   }
                   else
                   {
                       continue;
                   }
               }
               else
               {
                   if(v[i]==1 && v[i-1]==1)
                   {
                       ans +=5;
                   }
                   else if(v[i]==1)
                   {
                       ans +=1;
                   }
                   else if(v[i]==0 && v[i-1]==0)
                   {
                       ans1=false;
                       break;
                   }
                   else
                   {
                       continue;
                   }
               }
           }
           if(ans1)
           {
               cout<<ans<<endl;
           }
           else
           {
               cout<<-1<<endl;
           }
        }
    }
}
