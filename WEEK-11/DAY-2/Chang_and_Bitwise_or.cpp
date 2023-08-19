/*
PBL --> https://www.codechef.com/problems/CHNGOR
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
        sort(v.begin(),v.end());
        int sum=v[0];
        for(int i=1; i<n; i++)sum =sum | v[i];
        cout<<sum<<endl;
    }
}
