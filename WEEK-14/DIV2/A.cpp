/*
PBL --> https://codeforces.com/contest/1869/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp.size()==1 && v[0]==0)
        {
            cout<<0<<endl;
        }
        else
        {
            if(n%2==0)
            {
                cout<<2<<endl;
                cout<<1<<" "<<n<<endl;
                cout<<1<<" "<<n<<endl;
            }
            else
            {
                if(n==3)
                {
                    cout<<4<<endl;
                    cout<<1<<" "<<n<<endl;
                    cout<<n-1<<" "<<n<<endl;
                    cout<<n-2<<" "<<n-1<<endl;
                    cout<<n-2<<" "<<n-1<<endl;
                }
                else
                {
                    cout<<5<<endl;
                    cout<<1<<" "<<n<<endl;
                    cout<<n-1<<" "<<n<<endl;
                    cout<<1<<" "<<n-3<<endl;
                    cout<<n-3<<" "<<n-2<<endl;
                    cout<<n-3<<" "<<n-2<<endl;
                }
            }
        }
    }
}
