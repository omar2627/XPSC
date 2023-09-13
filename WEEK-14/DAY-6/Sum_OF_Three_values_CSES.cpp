/*
PBL --> https://cses.fi/problemset/task/1641
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;cin>>n>>x;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int idx1=0,idx2=0,idx3=0;
    bool ans=false;
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(v[i]+v[j]+v[k]==x)
                {
                    idx1=i;
                    idx2=j;
                    idx3=k;
                ans=true;
                break;
                }
            }
            if(ans)
            {
                break;
            }
        }
        if(ans)
        {
            break;
        }
    }
    if(ans)
    {
        cout<<idx1+1<<" "<<idx2+1<<" "<<idx3+1;
    }
    else
    {
        cout<<"IMPOSSIBLE";
    }
}
