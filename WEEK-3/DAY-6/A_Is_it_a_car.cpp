/*
PBL  -->  https://codeforces.com/contest/1800/problem/A
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
        for(int i=0; i<n; i++)
        {
            if(s[i]=='O' || s[i]=='M' || s[i]=='E' || s[i]=='W')
            {
                s[i]=s[i]+32;
            }
        }

        string k;
        k +=s[0];
        for(int i=1; i<n; i++)
        {
            if(s[i]!=s[i-1])
            {
                k +=s[i];
            }
            else
            {
                continue;
            }
        }
        string m="meow";
        if(k==m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
