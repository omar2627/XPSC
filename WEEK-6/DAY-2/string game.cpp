/*
PBL --> https://www.codechef.com/problems/STRAME
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
        string s;
        cin>>s;
        int cnt1=0,cnt2=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
        int x=min(cnt1,cnt2);
        if(x%2==0)
        {
            cout<<"RAMOS"<<endl;
        }
        else
        {
            cout<<"ZLATAN"<<endl;
        }
    }
}
