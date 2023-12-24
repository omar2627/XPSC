/*
PBL -->
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<long long>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        int cnt=0;

        int zero=0;
        for(int i=0; i<n ;i++)
        {
            if(v[i]<0)cnt++;
            if(v[i]==0)zero++;
        }
        if(zero>0){
            cout<<0<<endl;
        }
       else if(cnt==0)
        {
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }
        else
        {
            if(cnt%2!=0)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<1<<endl;
                cout<<1<<" "<<0<<endl;
            }
        }
    }
}
