/*
PBL -->  https://codeforces.com/contest/1843/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        int i=0,j=n-1,ans=0;
        while(i<=j)
        {
            ans +=v[i]-v[j];
            i++;
            j--;
        }
        cout<<ans<<endl;
        ans=0;
    }
}
