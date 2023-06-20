/*
PBL -->  https://codeforces.com/contest/1800/problem/D
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
        string s;
        cin>>s;
        string k=s;
       unordered_map<string,int>mp;
        for(int i=0; i<n-1; i++)
        {
            k.erase(i,2);
            mp[k]++;
            k=s;
        }
        int cnt=0;
        for(auto it:mp)
        {
            if(it.second>=1)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
        k="";
        cnt=0;
    }
}
