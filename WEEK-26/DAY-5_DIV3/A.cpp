/*
PBL -->
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int x=int(s[0]);
        x=x-97+1;
        int y=s[1]-'0';
        int a=x;
        int b=y;
     b++;
        while(b<=8)
        {

            cout<<s[0];

            cout<<b<<endl;
            b++;
        }
         a=x,b=y;
         b--;
        while(b>=1)
        {

            cout<<s[0];

            cout<<b<<endl;
            b--;
        }
        a=x,b=y;
        a--;
        while(a>=1)
        {

            cout<<char(a+96);
            a--;
            cout<<b<<endl;
        }
        a=x,b=y;
        a++;
        while(a<=8)
        {

            cout<<char(a+96);
          a++;
            cout<<b<<endl;

        }
    }
}
