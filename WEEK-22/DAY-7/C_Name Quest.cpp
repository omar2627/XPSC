/*
PBL --> https://codeforces.com/contest/523/problem/C?fbclid=IwAR1e8ybwlQFF3wThnYidP3PpBQwhtPgdNpQ9SjQfwz1A0nuYIaiTlB9efZc

OMAR
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,k;
    cin>>s>>k;
    int l=0,r=s.size()-1;
    int idx1=-1,idx2=-1;
    for(int i=0; i<k.size(); i++)
    {
        if(l==s.size())
        {
            idx1=i;
            break;
        }
        else if(s[l]==k[i])
        {
            l++;
        }
    }

    for(int i=k.size()-1; i>=idx1-1; i--)
    {
        if(r==-1)
        {
            idx2=i;
            break;
        }
        if(s[r]==k[i])
        {
            r--;
        }
    }
    if(l==s.size() && r>=0 or r==-1 && l<s.size() or l<s.size() && r>=0 or idx1==-1 or idx2==-1)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<(idx2-idx1)+2<<endl;
    }
}
