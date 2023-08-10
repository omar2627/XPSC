/*
PBL --> https://codeforces.com/contest/1857/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
          string s;cin>>s;
          int sz=s.size();
        int idx=sz-1,pos=sz;
        while(idx>-1)
        {
           if(s[idx]-'0' >=5)
           {
                           int nxt=idx-1;
            while(nxt>-1 && s[nxt]-'0'==9)
            {
                nxt--;
            }
            if(nxt==-1)
            {
                pos=1;
                s ='1'+s;
                break;
            }
            else
            {
                idx=nxt;
                int val=s[idx]-'0';
                val++;
                pos=nxt+1;
                s[idx]=(char)(val+'0');
            }
           }
           else
           {
               idx--;
           }
        }
        for(int i=pos; i<=s.size(); i++)
        {
            s[i]='0';
        }
        cout<<s<<endl;
    }
}
