/*
PBL --> https://codeforces.com/contest/1462/problem/A
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
        vector<long long>b(n);
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        if(n==1)
        {
            cout<<b[0]<<endl;
        }
       else if(n==2)
        {
            cout<<b[0]<<" "<<b[1]<<endl;
        }
else
{
            vector<long long>ans;
        int i=0,j=n-1;
        while(i<j)
        {
                ans.push_back(b[i]);
                ans.push_back(b[j]);
                i++;
                j--;
        }
       if(n%2!=0)
       {
            ans.push_back(b[j]);
       }
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
}
    }
}
