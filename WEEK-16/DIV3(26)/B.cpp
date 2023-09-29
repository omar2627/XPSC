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
        vector<long long>v;
        v.push_back(2);
        v.push_back(8);
        for(int i=3; i<=n; i++)
        {
            long long ans=i+6;
            v.push_back(ans);
        }
        for(int i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
