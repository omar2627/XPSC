/*
PBL --> https://codeforces.com/problemset/problem/1691/B
idx:1 2  3 4 5 6 7
s-> 2 2 3 3 3 4 4

1 idx er shoe er size ke emon idx e rakte hobe jeno ager idx er size er theke boro ba soman hoi sei idx er shoe er size er

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
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        if(n==1)
        {
            cout<<-1<<endl;
        }
        else if(mp.size()==1)
        {
            if(n%2==0)
            {
                for(int i=n; i>=1; i--)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
            }
            else
            {
                cout<<n<<" ";
                for(int i=1; i<n; i++)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
            }
        }
        else
        {
            bool ans=true;
            for(auto it:mp)
            {
                if(it.second%2!=0 && it.second==1)
                {
                    ans=false;
                    break;
                }
            }
            if(ans)
            {
                int x=1;
                int y=1;
                for(int i=0; i<n-1; i++)
                {
                    if(v[i]==v[i+1])
                    {
                        x=i+2;
                        cout<<x<<" ";
                    }
                    else
                    {
                        cout<<y<<" ";
                        y=i+2;
                    }
                    if(i==n-2)
                    {
                        cout<<y<<" ";
                    }
                }
                cout<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
}
