/*
PBL -->
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t1;cin>>t1;
    while(t1--)
    {
        int n,m;cin>>n>>m;
        string s;cin>>s;
        string t;cin>>t;
        bool check=true;
        for(int i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1])
            {
                check=false;
                break;
            }
        }
        if(check)cout<<"YES"<<endl;
        else
        {
             bool hobe=true;
        for(int i=0; i<m-1; i++)
        {
            if(t[i]==t[i+1])
            {
                hobe =false;
                break;
            }
        }
        if(!hobe)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            bool sure_hobe=true;
            for(int i=0; i<n-1; i++)
            {
                if(s[i]==s[i+1])
                {
                    if(t[0]==s[i] or t[m-1]==s[i+1])
                    {
                        sure_hobe=false;
                        break;
                    }
                }
            }
            if(sure_hobe)cout<<"YES"<<endl;
            else
            {
                cout<<"NO"<<endl;
            }
        }
        }

    }
}
