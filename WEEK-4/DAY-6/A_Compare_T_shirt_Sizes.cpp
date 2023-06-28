/*
PBL --> https://codeforces.com/contest/1741/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int sz1=s1.size()-1,sz2=s2.size()-1;
        if(s1[sz1]>s2[sz2])
        {
            cout<<"<"<<endl;
        }
        else if(s1==s2)
        {
            cout<<"="<<endl;
        }
        else if(s1[sz1]==s2[sz2])
        {
            if(sz1>sz2 && s1[sz1]!='S')
            {
                cout<<">"<<endl;
            }
            else if(sz1>sz2 && s1[sz1]=='S')
            {
                cout<<"<"<<endl;
            }
            else if(sz1<sz2 && s1[sz1]=='S')
            {
                cout<<">"<<endl;
            }
            else
            {
                cout<<"<"<<endl;
            }
        }
        else
        {
            cout<<">"<<endl;
        }
    }
}
