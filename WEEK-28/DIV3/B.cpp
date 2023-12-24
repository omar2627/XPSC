/*
PBL -->https://codeforces.com/contest/1914/problem/B
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int ex=k;
        vector<int>ans;
       int m=1;
        while(ex--)
        {
            ans.push_back(m);
            m++;
        }
        if(ex==0)
        {
            for(int i=n; i>=1; i++)cout<<i<<" ";
            cout<<endl;
        }
        else
        {
            for(int i=n; i>=m; i--){ans.push_back(i);}
            for(int i=0; i<ans.size(); i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
}
