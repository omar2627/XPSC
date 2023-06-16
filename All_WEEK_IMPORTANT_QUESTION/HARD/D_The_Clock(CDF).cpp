/*
PBL --> https://codeforces.com/contest/1692/problem/D
*/

#include<bits/stdc++.h>
using namespace std;
bool is_palindrome(string s)
{
    if(s[0]==s[4] && s[1]==s[3])
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int x;
        cin>>s>>x;
        int h=x/60;
        int m=x%60;
        int ans=0;
        map<string,bool>mp;
        while(!mp[s])
        {
            ans +=(is_palindrome(s));
            mp[s]=true;
            int hh=((s[0]-'0')*10+(s[1]-'0'));
            int mm=((s[3]-'0')*10+(s[4]-'0'));
            hh +=h;
            mm +=m;
            if(mm>59)
            {
                hh++;
            }
            mm=mm%60;
            hh=hh%24;
            s[0]=('0'+(hh/10));
            s[1]=('0'+(hh%10));
            s[3]=('0'+(mm/10));
            s[4]=('0'+(mm%10));
        }
        cout<<ans<<endl;
    }
}
