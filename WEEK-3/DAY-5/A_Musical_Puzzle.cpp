/*
PBL  -->  https://codeforces.com/contest/1833/problem/A
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
        map<string,int>st;
        string s;
        cin>>s;
        for(int i=0; i<n-1; i++)
        {
            string k=s.substr(i,2);
            st[k]++;
        }
        int cnt=0;
        for(auto it:st)
        {
            if(it.second>=1)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
        cnt=0;
    }
}
