/*
PBL --> https://codeforces.com/problemset/problem/1263/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,g,b;
        vector<int>v(3);
        for(int i=0; i<3; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<>());
        int rem=v[0]-v[1];
        if(rem<=v[2])
        {
            int ans=0;
            ans +=rem;
            int x=v[2]-rem;
            if(x>1)
            {
                if(x%2==0)
                {
                    ans +=x;
                }
                else
                {
                    ans +=x-1;
                }
            }
            int a=(v[0]-rem)-floor(x/2);
            ans +=a;
            cout<<ans<<endl;
        }
        else
        {
            int ans=0;
            ans +=v[2];
            ans +=v[1];
            cout<<ans<<endl;
        }
    }
}
