/*
PBL --> https://codeforces.com/contest/1807/problem/G2
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
        multiset<int>mp;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            mp.insert(val);
        }
        bool ans=true;
        long long sum=1;
        int x=0;
        while(!mp.empty())
        {
            if(*mp.begin()>sum)
            {
                ans=false;
                break;
            }
            else if(x>0)
            {
                sum +=*mp.begin();
                mp.erase(mp.begin());
            }
            else
            {
                mp.erase(mp.begin());
                x++;
                continue;
            }
        }
        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
mp.clear();
    }
}

