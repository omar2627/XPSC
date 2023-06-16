/*
problem link --> https://vjudge.net/contest/563181#problem/B
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
        int sum1=0,sum2=0;
        sum1=s[0]+s[1]+s[2];
        sum2=s[3]+s[4]+s[5];
        if(sum1==sum2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
