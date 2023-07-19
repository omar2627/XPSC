/*
PBL --> https://www.codechef.com/problems/RETURNCHANGE
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
        int a=n/10;
        int x=a*10;
        int lastDigit=n%10;
        if(lastDigit<5)
        {
            int ans=100-x;
            cout<<ans<<endl;
        }
        else
        {
            int ans=100-(x+10);
            cout<<ans<<endl;
        }
    }
}
