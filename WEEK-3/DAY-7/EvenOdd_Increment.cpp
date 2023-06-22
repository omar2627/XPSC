/*
PBL  -->  https://codeforces.com/contest/1744/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,q;
        cin>>n>>q;
        vector<long long>v;
        long long sum=0;
        long long Odcnt=0,Evncnt=0;
        for(int i=0; i<n; i++)
        {
            long long a;
            cin>>a;
            v.push_back(a);
        }

        for(int i=0; i<n; i++)
        {
            if(v[i]%2!=0)
            {
                Odcnt++;
            }
            else
            {
                Evncnt++;
            }
        }
        for(int i=0; i<n; i++)
        {
            sum +=v[i];
        }
        vector<int>tp;
        vector<int>x;
for(int i=0; i<q; i++)
{
    int g,h;
    cin>>g;
    tp.push_back(g);
    cin>>h;
    x.push_back(h);
}

        for(int i=0; i<q; i++)
        {
            if(Odcnt==n && tp[i]==0 || Evncnt==n && tp[i]==1)
            {
                cout<<sum<<endl;
                continue;
            }
            else if(tp[i]==0)
            {
                sum +=Evncnt*x[i];
                if(x[i]%2!=0)
                {
                    Odcnt +=Evncnt;
                    Evncnt -=Evncnt;
                }
                else
                {
                    Evncnt=Evncnt;
                }
            }
            else if(tp[i]==1)
            {
                sum +=Odcnt*x[i];
                if(x[i]%2!=0)
                {
                    Evncnt +=Odcnt;
                    Odcnt -=Odcnt;
                }
                else
                {
                    Odcnt=Odcnt;
                }
            }
        cout<<sum<<endl;
        }
        sum=0;
        Odcnt=0;
        Evncnt=0;
    }
}
