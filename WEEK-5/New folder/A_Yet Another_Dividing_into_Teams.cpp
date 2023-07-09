/*
PBL --> https://codeforces.com/contest/1249/problem/A
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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int team=1;
        for(int i=0; i<n; i++)
        {
            bool ans=false;
            for(int j=0; j<n; j++)
            {
                            if(abs(v[i]-v[j])==1)
            {
                ans=true;
            }
            }
            if(ans)
            {
                team++;
                break;
            }
            else
            {
                continue;
            }
        }
        cout<<team<<endl;
    }
}
