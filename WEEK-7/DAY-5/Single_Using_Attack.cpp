/*
PBL --> https://www.codechef.com/problems/SINGLEUSE
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,h;
        cin>>x>>y>>h;
        int cnt=1;
        int a=x-h;
        if(a==0)
        {
            cout<<cnt<<endl;
        }
        else if(a<y)
        {
            cnt++;
            cout<<cnt<<endl;
        }
        else
        {
            if(a%y==0)
            {
                int c=a/y;
                cnt +=c;
                cout<<cnt<<endl;
            }
            else
            {
                int c=a/y;
                cnt +=c;
                cnt++;
                cout<<cnt<<endl;
            }
        }
    }
}
