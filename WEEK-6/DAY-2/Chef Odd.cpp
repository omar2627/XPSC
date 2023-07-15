/*
PBL -->  https://www.codechef.com/problems/CHEFODD
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
        int n,k;
    cin>>n>>k;
    if(n>= k*2)
    {
        if(n%2==0)
        {
            if(n/2==k)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                int x=k*2;
                int y=n-x;
                if(y%2==0)
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
            if(n/2==k)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                int x=n/2;
                int y=k*2;
                int z=n-y;
                int a=z/2 +1;
                int b=n/2;
                if((a%2)!=0 && k>1)
                {
                    cout<<"NO"<<endl;
                }
                else if((a%2)==0 && k>1)
                {
                    cout<<"YES"<<endl;
                }
                else if(x%2==0 && k==1)
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
    else
    {
        cout<<"NO"<<endl;
    }
}
}
