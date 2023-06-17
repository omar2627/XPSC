/*
PBL -->  https://codeforces.com/contest/1692/problem/B
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
        int a[n];
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            mp[a[i]]++;
        }
        int delet=0,ans=0;
        for(auto it:mp)
        {
            if(it.second>=2)
            {
                delet +=it.second-1;
                ans++;
            }
            else
            {
                ans++;
            }
        }
        if(delet%2!=0)
        {
            ans--;
        }
        cout<<ans<<endl;
        ans=0;
        delet=0;
    }
}
