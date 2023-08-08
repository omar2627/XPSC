/*
PBL --> https://codeforces.com/problemset/problem/1430/A
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
        bool ans=false;
        for(int i=0; i<=floor(n/3)+1; i++)
        {
            for(int j=0; j<=floor(n/3)+1; j++)
            {
                for(int k=0; k<=floor(n/3)+1; k++)
                {
                    if(((i*3)+(j*5)+(k*7))==n)
                    {
                        cout<<i<<" "<<j<<" "<<k<<endl;
                        ans=true;
                        break;
                    }
                }
                if(ans)
                {
                    break;
                }
            }
            if(ans)
            {
                break;
            }
        }
        if(!ans)
        {
            cout<<-1<<endl;
        }
    }
}
