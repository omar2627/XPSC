/*
PBL --> https://www.codechef.com/START98D/problems/FINDK3
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if((x*y)%z==0)
        {
            long long ans=(x*y);
            cout<<ans<<" "<<z<<endl;
        }
        else if((x*z)%y==0)
        {
            long long ans=(x*z);
            cout<<ans<<" "<<y<<endl;
        }
        else if((y*z)%x==0)
        {
            long long ans=(y*z);
            cout<<ans<<" "<<x<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
