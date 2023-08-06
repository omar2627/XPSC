/*
PBL --> https://codeforces.com/problemset/problem/1722/A

1
5
Timur

*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int t=0,i1=0,m=0,u=0,r=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='T')
            {
                t++;
            }
            else if(s[i]=='i')
            {
                i1++;
            }
            else if(s[i]=='m')
            {
                m++;
            }
            else if(s[i]=='u')
            {
                u++;
            }
            else if(s[i]=='r')
            {
                r++;
            }
        }

        if(t==1 && i1==1 && m==1 && u==1 && r==1 && n==5)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
