/*
PBL --> https://codeforces.com/contest/1604/problem/B
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        if(n%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            bool ans=false;
            for(int i=0; i<n-1; i++)
            {
                if(v[i]>=v[i+1])
                {
                    ans=true;
                    break;
                }
            }
            if(ans)
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
