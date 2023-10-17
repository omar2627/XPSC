/*
PBL --> https://codeforces.com/problemset/gymProblem/101856/K
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    for(int i=1; i<=t; i++)
    {
        cin>>a>>b>>c;
        if(a==0 or b==0)
        {
            cout<<"Case "<<i<<": "<<0<<endl;
        }
        else
        {
            if(c==0)
            {
                if(a==1)
                {
                    cout<<"Case "<<i<<": "<<0<<endl;
                }
                else
                {
                    int ans=a/2;
                    int x=a/2;
                    if(x<=b)
                    {
                        cout<<"Case "<<i<<": "<<ans<<endl;
                    }
                    else
                    {
                        cout<<"Case "<<i<<": "<<b<<endl;
                    }
                }
            }
            else
            {
                int ans=min({a,b,c});
                a=max(0,a-ans);
                b=max(0,b-ans);
                c=max(0,c-ans);
                if(a==0 or b==0 && c==0 && a==1)
                {
                    cout<<"Case "<<i<<": "<<ans<<endl;
                }
                else
                {
                    ans +=a/2;
                    int x=a/2;
                    if(x<=b)
                    {
                        cout<<"Case "<<i<<": "<<ans<<endl;
                    }
                    else
                    {
                        cout<<"Case "<<i<<": "<<b+ans<<endl;
                    }
                }
            }
        }
    }
}
