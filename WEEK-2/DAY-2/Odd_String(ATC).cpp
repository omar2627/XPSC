/*
problem link --> https://atcoder.jp/contests/abc072/tasks/abc072_b?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sz=s.size();
    for(int i=0; i<sz; i++)
    {
        if((i%2)==0)
        {
            cout<<s[i];
        }
    }
}
