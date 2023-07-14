/*
PBL -->  https://www.codechef.com/problems/MAXIMSCORE
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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        vector<int>a;
        int ans=0;
        ans=abs(v[0+1]-v[0]);
        a.push_back(ans);
        if(n>=2)
        {
            ans=abs(v[n-2]-v[n-1]);
            a.push_back(ans);
        }
        for(int i=1; i<n-1; i++)
        {
            int d1=abs(v[i-1]-v[i]);
            int d2=abs(v[i+1]-v[i]);
            a.push_back(max(d1,d2));

        }
        sort(a.begin(),a.end());
        cout<<a[0]<<endl;
    }
}
