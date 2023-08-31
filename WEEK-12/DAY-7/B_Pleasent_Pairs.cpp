/*
PBL --> https://codeforces.com/problemset/problem/1541/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<pair<long long,int>>v;
        for(long long i=0; i<n; i++)
        {
            long long val;
            cin>>val;
            v.push_back({val,i});
        }
        sort(v.begin(),v.end());
        int cnt=0;
        for(long long i=0; i<n; i++)
        {
            for(long long j=i+1; j<n; j++)
            {
                if(v[i].first*v[j].first>(2*n))
                {
                    break;
                }

                if((v[i].first*v[j].first) == (v[i].second+v[j].second)+2)
                {
                    cnt++;
                }

            }
        }
        cout<<cnt<<endl;
    }
}
