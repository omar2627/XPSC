/*
PBL --> https://codeforces.com/problemset/problem/1374/C
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
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
                if(s[i]==')' && a=='(')
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        if(st.empty())
        {
            cout<<0<<endl;
        }
        else
        {
            int sz=st.size();
            cout<<sz/2<<endl;
        }
    }
}
