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
        int n,x,k,p;
        cin>>n>>x>>k>>p;
       int ans=p;
        if(n==k && n>1)
        {
             int a=1;
                        for(int i=0; i<k; i++)
            {
                if(a<=x)
                {
                    ans +=10;
                    a++;
                }
                else
                {
                    ans +=5;
                }
            }
            ans +=20;
        }
        else if(k<3)
        {
            int a=1;
                        for(int i=0; i<k; i++)
            {
                if(a<=x)
                {
                    ans +=10;
                    a++;
                }
                else
                {
                    ans +=5;
                }
            }
        }
        else if(k>=3 && k<n)
        {
             int a=1;
                        for(int i=0; i<k; i++)
            {
                if(a<=x)
                {
                    ans +=10;
                    a++;
                }
                else
                {
                    ans +=5;
                }
            }
        }
        cout<<ans<<endl;
        ans=0;
    }
}
