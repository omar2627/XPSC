/*
PBL --> https://codeforces.com/problemset/problem/1428/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<char>st;
        for(int i=0; i<s.size(); i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(st.top()=='A')
            {
                if(s[i]=='A')
                {
                    st.push(s[i]);
                }
                else
                {
                    st.pop();
                }
            }
            else
            {
                if(s[i]=='A')
                {
                    st.push(s[i]);
                }
                else
                {
                    st.pop();
                }
            }
        }
        cout<<st.size()<<endl;
    }
}
