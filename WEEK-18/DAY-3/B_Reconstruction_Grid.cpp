/*
PBL --> https://codeforces.com/contest/1816/problem/B
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
        vector<int>v1,v2;
        int i=2,j=2*n,cnt=0;
        while(i<j)
        {
            if(cnt%2==0)
            {
                v1.push_back(j);
                j -=2;
                cnt++;
            }
            else
            {
                v1.push_back(i);
                i +=2;
                cnt++;
            }
        }
        v1.push_back(i);
       int i1=1,j1=2*n-3,cnt1=1;
        while(i1<j1)
        {
            if(cnt1%2==0)
            {
                v2.push_back(j1);
                j1 -=2;
                cnt1++;
            }
            else
            {
                v2.push_back(i1);
                i1 +=2;
                cnt1++;
            }
        }
        v2.push_back(i1);
        v2.push_back(n*2-1);
        for(int i=0; i<n; i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<endl;
    }
}
