/*
PBL --> https://www.youtube.com/watch?v=I1etxl8xWxs
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int mid=floor(n/2);
    long long ans=0;
    for(int i=0; i<n; i++)
    {
        ans +=abs(v[mid]-v[i]);
    }
    cout<<ans<<endl;
}
