/*
PBL-->
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
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        if(n==1)
        {
            cout<<"NO"<<endl;
        }
        else if(n==v[0] && v[0]-1==v[1] || v[0]==v[1] || v[0]-2==v[1] )
        {
            bool ans=true;
            for(int i=1; i<n; i++)
            {
                if(v[i]!=v[i-1]-1 && v[i]!=v[i-1])
                {
                    ans=false;
                }
            }
            if(ans)
            {
                cout<<"YES"<<endl;
            }
            if(ans==false)
            {
                bool ans1=true;
                for(int i=1; i<n; i++)
                {
                    if(v[i]!=v[i-1]-2 && v[i]!=v[i-1])
                    {
                        ans1=false;
                    }
                }
                if(ans1)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }

        else
        {
            cout<<"NO"<<1<<endl;
        }
    }
}
