/*
PBL --> https://codeforces.com/problemset/problem/236/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    if(mp.size()%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}
