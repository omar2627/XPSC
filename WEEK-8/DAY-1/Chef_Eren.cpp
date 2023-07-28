/*
PBL --> https://www.codechef.com/problems/CHEFEREN
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(n%2==0)
        {
            int ans=(n/2)*a+(n/2)*b;
            cout<<ans<<endl;
        }
        else
        {
            int x=floor(n/2);
            int ans=x*a+(n-x)*b;
            cout<<ans<<endl;
        }
    }
}
