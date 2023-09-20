#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int l,v1,v2;
        cin>>l>>v1>>v2;
         int a=ceil(l/(float)v1);
         int b=ceil(l/(float)v2);
         if(a==b)
         {
             cout<<-1<<endl;
         }
         else
         {
             int ans=abs(a-b)-1;
             cout<<ans<<endl;
         }
    }
}
