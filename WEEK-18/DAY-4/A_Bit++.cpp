/*
PBL --> https://codeforces.com/problemset/problem/282/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        string s;cin>>s;
        if(s[0]=='+' or s[2]=='+')ans++;
        else
        {
            ans--;
        }
    }
    cout<<ans<<endl;
}
