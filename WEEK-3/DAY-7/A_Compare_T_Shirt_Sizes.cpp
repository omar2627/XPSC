/*
PBL -->  https://codeforces.com/contest/1741/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,x;
        cin>>s>>x;
        int sz1=s.size()-1,sz2=x.size()-1;
        if(s[sz1]>x[sz2])
        {
            cout<<"<"<<endl;
        }
        else if(s[sz1]<x[sz2])
        {
            cout<<">"<<endl;
        }
        else if(s==x)
        {
            cout<<"="<<endl;
        }
        else if(s[sz1]==x[sz2])
        {
            if(sz1>sz2 && s[sz1]!='S')
            {
                cout<<">"<<endl;
            }
            else if(sz1>sz1 && s[sz1]=='S' && x[sz2]=='S')
            {
                cout<<"<"<<endl;
            }
            else if(sz1<sz2 &&  s[sz1]=='S' && x[sz2]=='S' )
            {
                cout<<">"<<endl;
            }
            else
            {
                cout<<"<"<<endl;
            }
        }
    }
}
