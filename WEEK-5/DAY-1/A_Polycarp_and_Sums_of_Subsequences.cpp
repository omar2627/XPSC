/*
PBL -->  https://codeforces.com/contest/1618/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<long long>v(7);
        for(int i=0; i<7; i++)
        {
            cin>>v[i];
        }
        long long a,b,c;
        for(int i=0; i<4; i++)
        {
            for(int j=i+1; j<4; j++)
            {
                for(int k=j+1; k<4; k++)
                {
                    if(v[i]+v[j]+v[k]==v[6])
                    {
                        a=v[i];
                        b=v[j];
                        c=v[k];
                        break;
                    }
                }
            }
        }
        if(a+b==v[4] && a+c==v[5])
        {
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else if(b+a==v[4]&& b+c==v[5])

        {
            cout<<b<<" "<<a<<" "<<c<<endl;
        }
        else if(b+c==v[4] && b+a==v[5])
        {
            cout<<b<<" "<<c<<" "<<a<<endl;
        }
        else if(a+c==v[4]&& a+b==v[5])
        {
            cout<<a<<" "<<c<<" "<<b<<endl;
        }
        else if(c+a==v[4] && (c+b)==v[5])
        {
            cout<<c<<" "<<a<<" "<<b<<endl;
        }
        else if((c+b)==v[4]&&(c+a)==v[5])
        {
            cout<<c<<" "<<b<<" "<<a<<endl;
        }
    }
}
