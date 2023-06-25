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
         int i=0;
         while(i<n)
         {
            c.insert(s[i]);
            d.insert(s[i]);
            if(c.size()==3)
            {
                if(i<n-1)
                {
                    c.insert(s[i+1]);
                }
                  if(c.size()==3)
                 {
                     i +=2;
                     day++;
                     c.clear();
                 }
                 else
                 {
                     i++;
                     day++;
                     c.clear();
                 }
            }
            else
            {
                i++;
                continue;
            }
        }
        if(c.size()<3)
        {
            day++;
        }
        if(d.size()<3)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<day<<endl;
        day=0;
        }
    }
}
