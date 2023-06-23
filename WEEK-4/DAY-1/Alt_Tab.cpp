/*
PBL -->  https://www.codechef.com/problems/ALTTAB
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
            stack<string>st;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        st.push(s);
    }
        map<string,bool>mp;
        while(!st.empty())
        {
            if(!mp[st.top()])
            {
                cout<<st.top().substr(st.top().size()-2);
                mp[st.top()]=true;
            }
            st.pop();
        }
    }

