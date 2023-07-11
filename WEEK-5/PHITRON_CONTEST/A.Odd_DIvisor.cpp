/*
PBL --> https://codeforces.com/contest/1475/problem/A
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
        if(n<3)
        {
            cout<<"NO"<<endl;
        }
        else
        {
           if(n%2!=0)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               int x=2;
               bool ans=true;
               while(pow(2,x)<=99999999999999)
               {
                   if(pow(2,x)==n)
                   {
                       ans=false;
                       cout<<"NO"<<endl;
                       break;
                   }
                   else
                   {
                       x++;
                   }
               }
               if(ans)
               {
                   cout<<"YES"<<endl;
               }
           }
        }
    }
}
