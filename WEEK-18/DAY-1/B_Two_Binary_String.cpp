/*
PBL --> https://codeforces.com/contest/1861/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s,s1;cin>>s>>s1;
        int sz=s.size();
        bool duitai_same=true;
        for(int i=0; i<sz; i++)
        {
            if(s[i]!=s1[i])
            {
                duitai_same=false;
                break;
            }
        }
        if(duitai_same)
        {
            cout<<"YES"<<endl;
        }
      else if(s[sz-2]=='0' && s1[sz-2]=='0' or s[1]=='1' && s1[1]=='1')
        {
            cout<<"YES"<<endl;
        }
        else
        {
            bool ans=false;
            for(int i=1; i<sz; i++)
            {
                if(s[i]==s1[i] && s[i]=='1' && s[i-1]=='0' && s1[i-1]=='0')
                {

                    ans=true;
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
}
