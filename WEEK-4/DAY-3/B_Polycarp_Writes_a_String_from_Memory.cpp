/*
PBL  -->  https://codeforces.com/contest/1702/problem/B
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
        int n=s.size();
        set<char>c;
        set<char>d;
        int day=0;
        for(int i=0; i<n; i++)
        {
            c.insert(s[i]);
            d.insert(s[i]);
            if(c.size()==4)
            {
                 day++;
                 c.clear();
                c.insert(s[i]);
            }
        }
        if(c.size()<=3)
        {
            day++;
            c.clear();
        }
            cout<<day<<endl;
            day=0;
            d.clear();
    }
}
