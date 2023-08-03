/*
PBL --> https://codeforces.com/contest/1791/problem/C
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
        int cnt=0;
        int i=0,j=n-1;
        while(i<=j)
        {
            if(s[i]=='1' && s[j]=='0' ||s[i]=='0' && s[j]=='1')
            {
                cnt +=2;
                i++;
                j--;
            }
            else
            {
                break;
            }
        }
        int ans=n-cnt;
        cout<<ans<<endl;
    }
}
