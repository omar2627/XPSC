/*
PBL --> https://vjudge.net/contest/592682#problem/Z
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s;cin>>n>>s;
    long long low=0,hi=n;
    long long ans=-1;
    while(low<=hi)
    {
       // cout<<hi<<endl;
        long long mid_val=(low+hi)/2;
        long long sum=0;
        string k=to_string(mid_val);
        for(int i=0; i<k.size(); i++) sum +=k[i]-'0';
        //cout<<n<<" "<<sum<<endl;
        long long diff=abs(mid_val-sum);
        if(diff<s)
        {
            low=mid_val+1;
        }
        else
        {
            hi=mid_val-1;
            ans=mid_val;
        }
    }

    if(ans==-1)cout<<0<<endl;
    else
    {
        cout<<(n-ans)+1<<endl;
    }
    }
