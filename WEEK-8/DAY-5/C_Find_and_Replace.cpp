/*
PBL --> https://codeforces.com/contest/1807/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0' || s[i]=='1')
            {
                continue;
            }
            else
            {
                for(int j=i; j<n; j++)
                {
                    char p=s[i];
                    if(p==s[j])
                    {
                        cout<<i<<" "<<s[j];
                        if(x==0)
                        {
                            s[j]='0';
                        }
                        else
                        {
                            s[j]='1';
                        }
                    }
                }
                if(x==0)
                {
                    x=1;
                }
                else
                {
                    x=0;
                }
            }

        }
        bool ans=true;
        for(int i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1])
            {
                ans=false;
                break;
            }
        }
        cout<<s<<endl;
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
