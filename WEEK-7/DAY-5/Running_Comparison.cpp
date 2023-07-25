/*
PBL --> https://www.codechef.com/problems/RUNCOMPARE
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
        vector<int>a(n),b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            int x=a[i];
            int y=b[i];
            int mx=max(x,y);
            int mn=min(x,y);
            int diff=mn*2;
            if(mx<=diff)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
