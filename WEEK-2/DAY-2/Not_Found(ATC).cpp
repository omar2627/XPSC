/*
problem link --> https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int frq[26]={0};
    for(int i=0; i<s.size(); i++)
    {
        frq[s[i]-'a']++;
    }
    int x=0;
    bool ans=true;
    for(int i=0; i<26; i++)
    {
        if(frq[i]>=1)
        {
            continue;
        }
        else
        {
            x=i;
            ans=false;
            break;
        }
    }
    if(ans)
    {
        cout<<"None";
    }
    else
    {
        cout<<char(x+'a');
    }
}
