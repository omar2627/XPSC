/*
PBL -->  https://codeforces.com/contest/1335/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,n,b;
        cin>>a>>n>>b;
        int unq=b;
        string s="";
         char ch='a';
        while(unq--)
        {

            s.push_back(ch);
            ch++;
        }
        string k=s;
        s +=k;
        if(s.size()>a)
        {
            int x=s.size()-a;
          s.erase(1,x);
        }
        else if(s.size()<a)
        {
            int x=a-s.size();
            for(int i=0; i<x; i++)
            {
                char ch='a';
                s +=string(1,ch);
            }
        }
        cout<<s<<endl;
        s.clear();
    }
}
