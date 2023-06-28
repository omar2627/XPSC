/*
PBL -->  https://codeforces.com/contest/1741/problem/B
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
        if(n==3 || n==1)
        {
            cout<<-1<<endl;

        }
        else if(n%2==0)
        {
            vector<int>v;
        for(int i=n; i>n/2; i--)
        {
            v.push_back(i);
        }
        for(int i=1; i<=n/2; i++)
        {
            v.push_back(i);
        }
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        }
        else
        {
                        vector<int>v;
        for(int i=n; i>n/2+1; i--)
        {
            v.push_back(i);
        }
        for(int i=1; i<=n/2+1; i++)
        {
            v.push_back(i);
        }
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        }
    }
}
