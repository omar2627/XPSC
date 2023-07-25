/*
PBL --> https://codeforces.com/contest/1851/problem/B
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
    vector<long long>v(n),v1(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        v1[i]=v[i];
    }
    sort(v1.begin(),v1.end());
    bool ans=true;
    for(int i=0; i<n; i++)
    {
        long long x=v1[i],y=v[i];
        if((x%2==0) && (y%2==0) || (x%2!=0) && (y%2!=0))
        {
            continue;
        }
        else
        {
            ans=false;
            break;
        }
    }
    if(ans)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
}
