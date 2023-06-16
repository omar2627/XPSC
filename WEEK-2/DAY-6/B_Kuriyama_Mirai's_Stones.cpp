/*
problem link -->  https://codeforces.com/problemset/problem/433/B
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long long> v;
    for(int i=0; i<n; i++)
    {
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    long long prfSum[n];
    long long prfSum1[n];
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            prfSum[i]=a[i];
            prfSum1[i]=v[i];
        }
        else
        {
            prfSum[i]=a[i]+prfSum[i-1];
            prfSum1[i]=prfSum1[i-1]+v[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<prfSum1[i]<<" ";
    }
    sort(v.begin(), v.end());

    int m;
    cin >> m;

    while(m--)
    {
        int tp, l, r;
        cin >> tp >> l >> r;
        long long sum = 0;

        if(tp == 1)
        {
            if(l!=1)
            {
                sum =prfSum[r-1]-prfSum[l-2];
            }
            else if(l==1)
            {
                sum=prfSum[r-1];
            }
        }
        else
        {
            if(l!=1)
            {
                sum =prfSum1[r-1]-prfSum1[l-2];
            }
            else
            {
                sum=prfSum1[r-1];
            }
        }
        cout << sum << endl;
        sum=0;
    }
}
