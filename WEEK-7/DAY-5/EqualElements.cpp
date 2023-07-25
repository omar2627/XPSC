/*
PBL --> https://www.codechef.com/problems/EQUALELE
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
        int mx=0;
        int a=0;
        for(auto it:mp)
        {
            if(it.second>mx)
            {
                mx=it.second;
                a=it.first;
            }
        }
        int cnt=0;
        for(auto it:mp)
        {
            if(a==it.first)
            {
                continue;
            }
            else
            {
                cnt +=it.second;
            }
        }
        cout<<cnt<<endl;
    }
}
