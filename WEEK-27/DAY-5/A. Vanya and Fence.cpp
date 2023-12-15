/*
PBL -->
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;cin>>n>>h;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    int ans=n;
    for(int i=0; i<n; i++)
    {
        if(v[i]>h)ans++;
    }
    cout<<ans<<endl;
}
