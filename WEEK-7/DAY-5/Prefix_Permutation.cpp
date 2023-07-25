/*
PBL --> https://www.codechef.com/problems/SUMPERM
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

        if(n%2==0)
        {
            for(int i=1; i<=n; i++)
            {
                if(i%2==0)
                {
                    continue;
                }
                else
                {
                    cout<<i+1<<" "<<i<<" ";
                }
            }
        }
        else
        {
            cout<<-1;
        }
        cout<<endl;
    }
}
