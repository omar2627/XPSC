#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        string s;cin>>s;
        map<char,int>mp;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }
        int total_odd=0;
        for(auto it:mp)
        {
            if(it.second%2!=0)
                total_odd++;
        }
        if(total_odd-1>k)
        {
            cout<<"NO"<<endl;
        }
        else
        {
                cout<<"YES"<<endl;
        }
    }
}
