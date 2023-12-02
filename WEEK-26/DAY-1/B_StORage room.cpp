/*
PBL --> https://codeforces.com/contest/1903/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<vector<int>>mt(n,vector<int>(n));
        vector<int>ans(n);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>mt[i][j];
            }
        }
int first,anD;
        for(int i=0; i<n; i++)
        {
            anD=1,first=0;
            for(int j=0; j<n;j++)
            {
                if(i==j)continue;
                else if(first==0)
                {
                    anD=mt[i][j];
                    first=1;
                }
                else
                {
                    anD &=mt[i][j];
                }
            }
            ans[i]=anD;
        }
        bool hobe=true;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==j)continue;
                else if((ans[i] | ans[j])!=mt[i][j])
                {
                    hobe=false;
                break;
                }
            }
        }
        if(hobe)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<n;i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
