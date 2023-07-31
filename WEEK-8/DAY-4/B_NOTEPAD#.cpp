/*
PBL --> https://codeforces.com/problemset/problem/1766/B
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
        map<string,int>k;
        int x=0;
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]==s[i+1] && i<n-1 && x==0)
            {
                x=1;
                string m=s.substr(i,2);
                k[m]++;
            }
            else if(x==1 && s[i]==s[i+1] && i<n-1)
            {
                x=0;
                continue;
            }
            else
            {
                x=0;
                string m=s.substr(i,2);
                k[m]++;
            }
        }
        bool ans=false;
        for(auto it:k)
        {
            if(it.second>=2)
            {
                ans=true;
            }
        }
        if(ans)
        {

            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
