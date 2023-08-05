/*
PBL -->  https://codeforces.com/problemset/problem/1758/A
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
        deque<char>dq;
        for(int i=0; i<s.size(); i++)
        {
            dq.push_back(s[i]);
            dq.push_front(s[i]);
        }
        while(!dq.empty())
        {
            cout<<dq.front();
            dq.pop_front();
        }
        cout<<endl;
    }
}
