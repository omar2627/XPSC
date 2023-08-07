/*
PBL --> https://codeforces.com/contest/1857/problem/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int odd=0,evn=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]%2!=0)
            {
                odd++;
            }
            else
            {
                evn++;
            }
        }
        if(n==2 && odd==1 && evn==1)
        {
            cout<<"NO"<<endl;
        }
       else if(odd%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
                cout<<"NO"<<endl;
        }
    }
}
