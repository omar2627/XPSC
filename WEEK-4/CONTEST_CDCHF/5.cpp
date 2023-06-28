/*
PBL --> https://www.codechef.com/START96D/problems/SWAPNUM31
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<long long>v(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }
        for(int i=1; i<n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                if(abs(i-j)>=k)
                {
                    swap(v[i],v[j]);
                }
            }
        }
        for(int i=1; i<=n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
