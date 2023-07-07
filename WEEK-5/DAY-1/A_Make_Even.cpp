/*
PBL --> https://codeforces.com/contest/1611/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string s=to_string(n);
        if(n%2==0)
        {
            cout<<0<<endl;
        }
        else
        {
            bool ans=false;
            int num;
            num=s[0]-'0';             //-----Single character to integer convert-------
            if(num%2==0)
            {
                cout<<1<<endl;
            }
            else
            {
                for(int i=0; i<s.size(); i++)
                {
                    int x;
                    x=s[i]-'0';
                    if(x%2==0)
                    {
                        ans=true;
                        break;
                    }
                }
                if(ans)
                {
                    cout<<2<<endl;
                }
                else
                {
                    cout<<-1<<endl;
                }
            }
        }
    }
}
