/*
PBL --> https://codeforces.com/problemset/problem/1485/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a<b)
        {
            cout<<1<<endl;
        }
        else
        {
            int cholbe=sqrt(a);
                        int mn=INT_MAX;
            op=0;
            for(int i=1; i<=cholbe; i++)
            {
                int op=0;
                int m=a,p=i+b;
                while(m>0)
                {
                    m =m/p;
                    op++;
                }
                int x=op+i;
                mn=min(mn,x);
            }
            cout<<mn<<endl;
        }
    }
}
