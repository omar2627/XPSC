/*
PBL --> https://codeforces.com/problemset/problem/749/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;cin>>k;
    if(k%2==0)
    {
        cout<<k/2<<endl;
        for(int i=0; i<k/2; i++)
        {
            cout<<2<<" ";
        }
        cout<<endl;
    }
            else
        {
            int val=k-3;
            int ans=val/2+1;
            cout<<ans<<endl;
            for(int i=0; i<val/2; i++)
            {
                cout<<2<<" ";
            }
            cout<<3<<endl;
        }
}
