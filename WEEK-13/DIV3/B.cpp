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
        int l,r;
        cin>>l>>r;
        if(r<=3)
        {
            cout<<-1<<endl;
        }
        else if(l==r)
        {
            if(l%2==0)
            {
                int x=l/2;
                if(x%2==0)
                {
                    cout<<x<<" "<<x<<endl;
                }
                else
                {
                    cout<<x-1<<" "<<x+1<<endl;
                }
            }
            else
            {
                int val=0;
                for(int i=3; i*i<=l; i+=2)
                {
                    if(l%i==0)
                    {
                        val=i;
                        break;
                    }
                }
                if(val==0)
                {
                    cout<<-1<<endl;
                }
                else
                {
                    int a=l/val;
                    int ans=(a-1)*val;
                    cout<<val<<" "<<ans<<endl;
                }
            }
        }
        else
        {
            if(l%2==0 && l>3)
            {
                int x=l/2;
                if(x%2==0)
                {
                    cout<<x<<" "<<x<<endl;
                }
                else
                {
                    cout<<x-1<<" "<<x+1<<endl;
                }
            }
            else if(r%2==0)
            {
                int x=r/2;
                if(x%2==0)
                {
                    cout<<x<<" "<<x<<endl;
                }
                else
                {
                    cout<<x-1<<" "<<x+1<<endl;
                }
            }
            else
            {
                int x=(r-1)/2;
                if(x%2==0)
                {
                    cout<<x<<" "<<x<<endl;
                }
                else
                {
                    cout<<x-1<<" "<<x+1<<endl;
                }
            }
        }
    }
}
