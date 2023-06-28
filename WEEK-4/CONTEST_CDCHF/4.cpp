/*
PBL -->  https://www.codechef.com/START96D/problems/REMOVEMUL
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        vector<long long>v(m);
        long long ans1=0;
        for(int i=0; i<m; i++)
        {
            cin>>v[i];
            ans1 +=v[i];
        }
        long long ans2=n*(n+1)/2;
        long long ans = ans2-ans1;
        cout<<ans<<endl;
        ans1=0;
        ans2=0;
        ans=0;
    }
}
