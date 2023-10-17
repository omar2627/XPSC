/*
PBL -->
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;cin>>t;
while(t--)
{
    int x,y;cin>>x>>y;
    int ans=floor(x/y);
    int ans1=min(ans,20);
    cout<<ans1<<endl;
}
}

