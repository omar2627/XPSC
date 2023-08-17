/*
PBL -->
*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<char>ch;
        bool ans=true;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
            {
                ch.push(s[i]);
            }
            else if(ch.empty())
            {
                ans=false;
                break;
            }
            else
            {
                ch.pop();
            }
        }
        if(ch.empty() && ans)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            deque<char>dq;
            cout<<"YES"<<endl;
            int sz=s.size()*2;
            int siz=0;
            int idx=0;
            int cnt1=0;
            if(s[s.size()-1]=='(')
            {
                cnt1=1;
            }

            for(int i=0; i<s.size()-1; i++)
            {
                if(s[i]=='(' && s[i+1]!=')')
                {
                    cnt1++;
                }
            }
            while(true)
            {
                if(idx==s.size())
                {
                    break;
                }
                if(dq.empty())
                {
                    dq.push_front(s[idx]);
                    siz++;
                    idx++;
                }
                else
                {
                    if(siz%2!=0)
                    {
                        if(dq.back()==')')
                        {
                            dq.push_front('(');
                            siz++;
                        }
                        else
                        {
                            siz++;
                            continue;
                        }
                    }
                    else
                    {
                        dq.push_back(s[idx]);
                        siz++;
                        idx++;
                    }
                }
            }
            for(int i=0; i<cnt1; i++)
            {
                dq.push_back(')');
            }
            int sizz=dq.size();
            int rem=sz-sizz;
            for(int i=0; i<rem; i++)
            {
                if(i%2==0)
                {
                    dq.push_back('(');
                }
                else
                {
                    dq.push_back(')');
                }
            }
            while(!dq.empty())
            {
                char c=dq.front();
                cout<<c;
                dq.pop_front();
            }
            cout<<endl;
        }
    }
}
