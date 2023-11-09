/*
PBL --> https://vjudge.net/contest/592682#problem/B

OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0; i<n ;i++)cin>>v[i];
    int q;cin>>q;
    int hgt;
    while(q--)
    {
        cin>>hgt;
        auto it1=v.begin();
        auto it2=upper_bound(v.begin(),v.end(),hgt);
        auto it3=lower_bound(v.begin(),v.end(),hgt);
        int idx1=it2-it1,idx2=it3-it1;
        if(idx1==n && idx2==n)
        {
            cout<<v[n-1]<<" "<<"X"<<endl;
        }
        else
        {
            if(idx1==n)
            {
                if(v[idx2]==hgt && idx2>0)
                {
                    cout<<v[idx2-1]<<" "<<"X"<<endl;
                }
                else if(v[idx2]==hgt && idx2==0)
                {
                    cout<<"X"<<" "<<"X"<<endl;
                }
                else
                {
                    cout<<v[idx2-1]<<" "<<"X"<<endl;
                }
            }
            else
            {
                if(v[idx2]==hgt && idx2>0)
                {
                    cout<<v[idx2-1]<<" "<<v[idx1]<<endl;
                }
                else if(v[idx2]==hgt && idx2==0)
                {
                    cout<<"X"<<" "<<v[idx1]<<endl;
                }
                else
                {
                    cout<<v[idx2-1]<<" "<<v[idx1]<<endl;
                }
            }
        }
    }
}
