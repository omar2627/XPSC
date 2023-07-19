/*
PBL --> https://www.codechef.com/problems/TENPACKETS
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int ans1=(y*2)+x;
        int ans2=(x*5);
        int ans=min(ans1,ans2);
        cout<<ans<<endl;
    }
}
