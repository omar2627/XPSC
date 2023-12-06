/*
PBL -->
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        vector<int>uc,lc;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='b')
            {
                s[i]='0';
                if(lc.empty())continue;
                else
                {
                    s[lc[lc.size()-1]]='0';
                    lc.pop_back();
                }
            }
            else if(s[i]=='B')
            {
                   s[i]='0';
                if(uc.empty())continue;
                else
                {
                    s[uc[uc.size()-1]]='0';
                    uc.pop_back();
                }
            }
           else if(isupper(s[i]))
           {
               uc.push_back(i);
           }
           else
           {
               lc.push_back(i);
           }
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
                continue;
            else
                cout<<s[i];
        }
        cout<<endl;
    }
}
