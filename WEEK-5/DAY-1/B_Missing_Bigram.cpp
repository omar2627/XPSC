/*
PBL -->  https://codeforces.com/contest/1618/problem/B
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
        vector<string>s(n-2);
        for(int i=0; i<n-2; i++)
        {
            cin>>s[i];
        }
        if(s.size()==1)
        {
            string y;
            y=s[0];
            y +=string(1,'a');
            cout<<y<<endl;
        }
        else
        {
            int cnt=0;
            string x;
            x +=s[0];
            for(int i=1; i<n-2; i++)
            {
                if(s[i][0]!=s[i-1][1])
                {
                    x +=s[i];
                    cnt=1;
                }
                else if(s[i][0]==s[i-1][1] )
                {
                        x +=string(1,s[i][1]);
                    }
                }
                if(cnt==0)
                {
                    x +=string(1,'a');
                }
                cout<<x<<endl;
            }
        }
    }

