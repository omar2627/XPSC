/*
PBL -->  https://codeforces.com/contest/1714/problem/B
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
            mp[a[i]]++;
        }
        int ans=0,op=0;
        for(int i=0; i<n; i++)
        {
            if(mp[a[i]]>1)
            {
                op++;
                mp[a[i]]--;
                op +=ans;
                ans=0;
            }
            else
            {
                ans++;
            }
        }
        cout<<op<<endl;
    }

}
