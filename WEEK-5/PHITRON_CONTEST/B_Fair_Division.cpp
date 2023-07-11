/*
PBL --> https://codeforces.com/contest/1472/problem/B
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
        int sum=0,o1=0,t2=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==1)
            {
                o1++;
            }
            else
            {
                t2++;
            }
        }
        if(o1%2==0 && t2%2==0 )
        {
            cout<<"YES" <<endl;
        }
        else if(o1%2==0 && o1>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
