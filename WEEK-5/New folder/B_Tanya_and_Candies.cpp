/*
PBL -->  https://codeforces.com/contest/1118/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int ans=0;
    int od=0,even=0;
    for(int j=1; j<n; j++)
    {
        if(j%2==0)
        {
            even +=v[j];

        }
        else
        {
            od +=v[j];
        }
    }
    if(od==even)
    {
        ans++;
    }
    for(int i=1; i<n; i++)
    {

        if(i%2==0)
        {
            even -=v[i];
            even +=v[i-1];
        }
        else
        {
          od -=v[i];
          od +=v[i-1];
        }
        if(od==even)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}
