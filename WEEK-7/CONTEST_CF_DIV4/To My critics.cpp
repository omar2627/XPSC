/*
Pbl -->  https://codeforces.com/contest/1850/problem/0
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>a(3);
        for(int i=0; i<3; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<>());
        if(a[0]+a[1]>=10)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
