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
        map<int,int>mp;
        int val;
        for(int i=0; i<n; i++)
        {
            cin>>val;
            mp[val]++;
        }
        if(mp.size()==1)cout<<"YES"<<endl;
        else if(mp.size()==2)
        {
            int cnt1=0,cnt2=0;
            for(auto it:mp)
            {
                if(cnt1==0)
                {
                    cnt1=it.second;
                }
                else
                {
                    cnt2=it.second;
                }
            }
            if(cnt1==(cnt2-1) or cnt2==(cnt1-1) or cnt1==cnt2)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
