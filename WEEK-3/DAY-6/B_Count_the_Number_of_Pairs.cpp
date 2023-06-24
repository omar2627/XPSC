/*
PBL  -->  https://codeforces.com/contest/1800/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        map<char, int> mp;
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            mp[ch]++;
        }

        for(char i = 'a', j = 'A'; i <= 'z' && j <= 'Z'; i++, j++)
        {
            if(mp[i] == 0 && mp[j] == 0)
                {
                    continue;
                }

            int mn = min(mp[i], mp[j]);

            ans += mn;
            mp[i] -= mn;
            mp[j] -= mn;
        }

        for(auto it : mp)
        {
            if(it.second >= 2 && k > 0)
            {
                while(it.second >= 2)
                {
                    it.second -= 2;
                    ans++;
                    k--;
                    if(k == 0)
                        break;
                }
            }
        }
        cout << ans <<endl;
    }
}
