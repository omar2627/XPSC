/*
PBL  -->  https://codeforces.com/contest/1512/problem/A
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
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            if(mp[v[i]]==1)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
