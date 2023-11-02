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
        int n;
        cin>>n;
        vector<int>v(n+1);
        for(int i=1; i<=n; i++)cin>>v[i];
        bool ans=true;
        if(n<=3)ans=true;
       else if(n==4)
        {
            if(v[4]<v[3])ans=false;
        }
        else if(n<=8)
        {
            if(v[4]<v[3])ans=false;
            if(n>5)
            {
                for(int i=6; i<=n; i++)
                {
                    if(v[i]<v[i-1])
                    {
                        ans=false;
                        break;
                    }
                }
            }
        }
        else if(n<=16 )
        {
            if(v[4]<v[3])ans=false;
            for(int i=6; i<=8; i++)
            {
                if(v[i]<v[i-1])
                {
                    ans=false;
                    break;
                }
            }
            if(n>9)
            {

                for(int i=10; i<=n; i++)
                {
                    if(v[i]<v[i-1])
                    {
                        ans=false;
                        break;
                    }
                }

            }
        }
        else if(n<=20)
        {
            if(v[4]<v[3])ans=false;
            for(int i=6; i<=8; i++)
            {
                if(v[i]<v[i-1])
                {
                    ans=false;
                    break;
                }
            }
            for(int i=10; i<=16; i++)
            {
                if(v[i]<v[i-1])
                {
                    ans=false;
                    break;
                }
            }
            if(n>16)
            {
                for(int i=18; i<=n; i++)
                {
                    if(v[i]<v[i-1])
                    {
                        ans=false;
                        break;
                    }
                }
            }
        }
        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
