/*
PBL --> https://codeforces.com/contest/1788/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
        }
        else
        {
            int first=(n-1)/2,second=(n-1)/2+1;
            string s1=to_string(first),s2=to_string(second);
           if(s1[0]!=s2[0]&& n>18)
           {
                cout<<(n-1)/2-4<<"  "<<(n-1)/2+5<<endl;
           }
           else
                cout<<(n-1)/2<<"  "<<(n-1)/2+1<<endl;
        }
    }
}
