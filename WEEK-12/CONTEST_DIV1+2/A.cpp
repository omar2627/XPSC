/*
PBL -->
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,q;
        cin>>n>>a>>q;
        string s;
        cin>>s;
        if(n==a)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int ans=0;
            bool an=true;
            for(int i=0; i<q; i++)
            {
                if(s[i]=='+')
                {
                    ans++;
                    if(ans+a>=n)
                    {
                        cout<<"YES"<<endl;
                        an=false;
                        break;
                    }
                }
                else
                {
                    ans--;
                }
            }
            if(ans<0)
            {
                ans=0;
            }
            if(ans+a==n-1 && an && s[q-1]=='+')
            {
                cout<<"MAYBE"<<endl;
            }
            else if(an)
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
