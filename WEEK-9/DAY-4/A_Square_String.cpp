/*
PBL, --> https://codeforces.com/problemset/problem/1619/A
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
        int sz=s.size();
        if(sz%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int sz1=sz/2;
            string a=s.substr(0,sz1);
            string b=s.substr(sz1,sz1);
            if(a==b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
