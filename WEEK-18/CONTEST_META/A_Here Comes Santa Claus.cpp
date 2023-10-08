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
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        float ans=INT_MAX;
        int i=1;
        while(i<n-2)
        {
            float diff1=(v[0]+v[i])/2.0;
            float diff2=(v[n-1]+v[i+1])/2.0;
            float diff=abs(diff1-diff2);
            ans=min(ans,diff);
            i++;
        }
            cout<<"Case #i: "<<ans<<endl;
    }
}
