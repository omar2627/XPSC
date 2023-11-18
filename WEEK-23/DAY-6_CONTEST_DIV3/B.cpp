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
        vector<long long>w(n);
        for(int i=0; i<n; i++)cin>>w[i];
        vector<int>divisible;
        for(int i=1; i<=(n/2)+1; i++)
        {
            if(n%i==0)
            {
                divisible.push_back(i);
            }
        }
        long long mx=0,mn=INT_MAX;
        for(int i=0; i<divisible.size(); i++)
        {
            long long mxSum=0,mnSum=0;

        }
    }
}
