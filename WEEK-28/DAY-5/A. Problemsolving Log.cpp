/*
PBL --> https://codeforces.com/contest/1914/problem/A
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        map<char,int>mp;
        for(auto c:s)
        {
            mp[c]++;
        }
        int slvd=0;
        for(auto c:s)
        {
            if(mp[c]>= int(c)-64)
            {
                slvd++;
                mp[c]=-1;
            }
        }
        cout<<slvd<<endl;
    }
}
