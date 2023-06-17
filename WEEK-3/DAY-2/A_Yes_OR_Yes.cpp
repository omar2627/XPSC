/*
PBL -->  https://codeforces.com/contest/1703/problem/A
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
        int y=0,e=0,s1=0;
            if(s[0]=='Y' || s[0]=='y')
            {
                y++;
            }
             if(s[1]=='E' || s[1]=='e')
            {
                e++;
            }
             if(s[2]=='S' || s[2]=='s')
            {
                s1++;
            }

        if(y==1 && e==1 && s1==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        y=0;
        e=0;
        s1=0;
    }
}
