/*
PBL --> https://codeforces.com/contest/1213/problem/A

5
3 3 1 2 2
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int cnt=0;
    int mn=INT_MAX;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            long long x=v[i];
            if(i==j)
            {
                continue;
            }
            else
            {
                long long a=abs(x-v[j]);
                if((a%2)==0 || x==v[j])
                {
                    continue;
                }
                else
                {
                    cnt++;
                }
            }
        }
        mn=min(cnt,mn);
        cnt=0;
    }
    cout<<mn<<endl;
}
