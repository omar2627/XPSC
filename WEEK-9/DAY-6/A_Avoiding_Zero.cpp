/*
PBL --> https://codeforces.com/problemset/problem/1427/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum +=v[i];
        }
        if(sum==0)
        {
            cout<<"NO"<<endl;
        }
        else if(sum>0)
        {
            cout<<"YES"<<endl;
            sort(v.begin(),v.end(),greater<>());
            for(int i=0; i<n; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
                        cout<<"YES"<<endl;
            sort(v.begin(),v.end());
            for(int i=0; i<n; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}
