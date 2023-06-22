/*
PBL  -->  https://codeforces.com/contest/1744/problem/A
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
        vector<char>v1(n);
        string s;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(v[i]>0)
            {
                v1[i]=s[i];
            }
            for(int j=i+1; j<n;  j++)
            {
                if(v[i]==v[j] && v[j]>0 )
                {
                    v1[j]=s[i];
                    v[j]=-1;
                }
            }
        }
        bool ans=true;
        for(int i=0; i<n; i++)
        {
            if(v1[i]!=s[i])
            {
                ans=false;
                break;
            }
        }
        cout<<endl;
        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        ans=true;
    }
}
