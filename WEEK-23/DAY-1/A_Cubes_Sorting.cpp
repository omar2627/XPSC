
/*
OMAR

PBL --> https://codeforces.com/contest/1420/problem/A
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
        for(int i=0; i<n; i++)cin>>v[i];
        if(n==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            bool possible1=false;
            for(int i=1; i<n; i++)
            {

                if(v[i]>=v[i-1])
                {
                    possible1=true;
                    break;
                }

            }
            if(possible1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
