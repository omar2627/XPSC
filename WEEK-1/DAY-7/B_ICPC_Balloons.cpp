/*
problem link -->  https://codeforces.com/contest/1703/problem/B

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        int frq[25];
        for(int i=0; i<26; i++)
        {
            frq[i]=0;
        }
        for(int i=0; i<n; i++)
        {
            frq[s[i]-'A']++;
        }
        for(int i=0; i<26; i++)
        {
            if(frq[i]<1)
            {
                continue;
            }
            else if(frq[i]==1)
            {
                cnt +=2;
            }
            else if(frq[i]>1)
            {
                cnt +=frq[i]+1;
            }
        }
        cout<<cnt<<endl;
        cnt=0;
        frq[25]={0};
    }
}
