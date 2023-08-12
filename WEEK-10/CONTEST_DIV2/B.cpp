/*
PBL --> https://codeforces.com/contest/1859/problem/B
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<long long>> v(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            for (int j = 0; j < x; j++)
            {
                long long m;
                cin >> m;
                v[i].push_back(m);
            }
        }
        for(int i=0; i<n; i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        vector<long long> ans1, ans2;
        for (int i = 0; i < n; i++)
        {
        ans1.push_back(v[i][0]);
        ans2.push_back(v[i][1]);
        }
        sort(ans1.begin(), ans1.end());

        sort(ans2.begin(), ans2.end(), greater<>());
long long sum=0;
for(int i=0; i<n-1; i++)
{
    sum +=ans2[i];
}
sum +=ans1[0];
cout<<sum<<endl;
    }
}
