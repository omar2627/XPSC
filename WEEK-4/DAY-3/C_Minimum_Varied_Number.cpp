/*
PBL  -->  https://codeforces.com/contest/1714/problem/C
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
        string s="";
        int ans=0;
        for(int i=9; i>=1; i--)
        {
           if((ans+i)<=n)
           {
               ans +=i;
               s +=to_string(i);
           }
           else if(ans==n)
           {
               break;
           }
           else
           {
               continue;
           }
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
}
