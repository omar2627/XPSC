/*
PBL -->
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        if(n==1)
        {
            cout<<1<<endl;
            cout<<v[0]<<endl;
        }
        else
        {
                  vector<int>ans;
        ans.push_back(v[0]);
        for(int i=1; i<n; i++)
        {
            if(v[i]>=v[i-1])
            {
                ans.push_back(v[i]);
            }
            else
            {
                ans.push_back(v[i]);
                ans.push_back(v[i]);
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        }
    }
}
