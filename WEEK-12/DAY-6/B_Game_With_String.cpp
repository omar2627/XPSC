/*
PBL --> https://codeforces.com/problemset/problem/1104/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int cnt=0;
    stack<char>st;
    for(int i=0; i<s.size(); i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
        }
        else
        {
            char a=st.top();
            if(a==s[i])
            {
                cnt++;
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
    if(cnt%2==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    }

