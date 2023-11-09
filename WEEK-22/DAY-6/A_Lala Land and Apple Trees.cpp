/*
PBL ---> https://codeforces.com/problemset/problem/558/A?fbclid=IwAR0yfDkvY4a7e6LyJODTK-6luz-p8GjauGOdIMGEN6qtoj6gdmmKrXSPDSY
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    int x,a;
    for(int i=0; i<n ; i++)
    {
        cin>>x>>a;
        v.push_back({x,a});
    }
    sort(v.begin(),v.end());
    int fnd=-1;
    for(int i=0; i<n ; i++)
    {
        if(v[i].first>0)
        {
            fnd=i;
            break;
        }
    }

    int idx=fnd;
    if(v[0].first>0)
    {
        cout<<v[0].second<<endl;
    }
    else if(idx==-1)
    {
        cout<<v[n-1].second<<endl;
    }
    else
    {
        int total_pos=n-idx;
        int total_neg=idx;
        long long sum=0;
        if(total_pos>total_neg)
        {
            for(int i=0; i<=total_neg*2; i++)
            {
                sum +=v[i].second;
            }
            cout<<sum<<endl;
        }
        else if(total_pos<total_neg)
        {
            long long sum=0;
            for(int i=idx; i<n; i++)sum +=v[i].second;
            int jabe=idx-total_pos;
            for(int i=idx-1; i>=jabe-1; i--)sum +=v[i].second;
            cout<<sum<<endl;
        }
        else
        {
            long long sum=0;
            for(int i=0; i<n; i++)sum +=v[i].second;
            cout<<sum<<endl;
        }
    }
}
