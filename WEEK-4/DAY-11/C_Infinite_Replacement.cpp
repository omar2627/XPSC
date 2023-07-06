/*
PBL -->  https://codeforces.com/contest/1674/problem/C
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
int n=s.size();
        bool a=false;
        for(int i=0; i<t.size(); i++)
        {
            if(t[i]=='a')
            {
                a=true;
                break;
            }
        }
        if(a && t.size()==1)
        {
            cout<<1<<endl;
        }
        else if(a && t.size()>1)
        {
            cout<<-1<<endl;
        }
        else
        {
                long long op=pow(2,n);
cout<<op<<endl;
        }
    }
}
