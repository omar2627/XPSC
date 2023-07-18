/*
PBL --> https://vjudge.net/contest/569683#problem/C
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
        if(n==50)
        {
            cout<<0<<endl;
        }
        else
        {
            int ans=0,x=n;
            while(n!=50)
            {
                if(x>50)
                {
                    x=x-3;
                    ans++;
                }
                else if(x<50)
                {
                    x=x+2;
                    ans++;
                }
                else
                {
                    break;
                }
            }
                    cout<<ans<<endl;
        ans=0;
        }
    }
}
