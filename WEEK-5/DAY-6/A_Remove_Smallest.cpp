/*
PBL --> https://codeforces.com/contest/1399/problem/A
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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int cnt=0;
        for(int i=n-1; i>0; i--)
        {
            if(abs(v[i]-v[i-1]<=1))
            {
                cnt++;
            }
        }
        if(n==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {

            if(cnt==(n-1))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
