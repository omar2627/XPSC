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
        int n,x;cin>>n>>x;
        vector<int>point(n);
        for(int i=0; i<n; i++)
        {
            cin>>point[i];
        }
        int ans=point[0];
        for(int i=1; i<n;i++)
        {
            ans=max((point[i]-point[i-1]),ans);
        }
        ans=max(ans,(x-point[n-1])*2);
        cout<<ans<<endl;
    }
}
