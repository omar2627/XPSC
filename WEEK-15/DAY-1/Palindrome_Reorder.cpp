/*
PBL --> https://cses.fi/problemset/task/1755
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    if(s.size()==1)
    {
        cout<<s<<endl;
    }
    else
    {
         int cnt=0;
    map<char,int>mp;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    char c;
    int sZ=0;
    for(auto it:mp)
    {
        if(it.second%2!=0)
        {
            sZ=it.second;
            c=it.first;
            cnt++;
        }
    }
    if(cnt>=2)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        deque<char>dq;
        vector<char>v;
        for(int i=0; i<s.size(); i++)
        {
            v.push_back(s[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0; i<s.size(); i++)
        {
            if(v[i]==c)
            {
                continue;
            }
            else
            {
                if(i%2==0)
                {
                    dq.push_front(v[i]);
                }
                else
                {
                    dq.push_back(v[i]);
                }
            }
        }
        int sz=dq.size()/2;
        int cnt=0;
        vector<char>v1;
        while(!dq.empty())
        {
            if(cnt==sz)
            {

                for(int i=0; i<sZ; i++)
                {
                    v1.push_back(c);
                }
                v1.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
            else
            {
                cnt++;
                v1.push_back(dq.front());
                dq.pop_front();
            }
        }
        for(int i=0; i<v1.size(); i++)
        {
            cout<<v1[i];
        }
        cout<<endl;
    }
    }
}
