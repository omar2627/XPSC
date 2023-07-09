/*
PBL --> https://codeforces.com/contest/1234/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            sum +=v[i];
        }
        if(sum==n)
        {
            cout<<1<<endl;
        }
        else
        {
            long long x=floor(sum/n);
            if((x*n)>=sum)
            {
                cout<<x<<endl;
            }
            else
            {
                cout<<x+1<<endl;
            }
        }
    }
}
