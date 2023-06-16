/*
problem link --> https://www.codechef.com/START93D/problems/SEVENRINGS

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int total_bill=n*x;
       string s=to_string(total_bill);
       char first=s[0];
       int sz=s.size();
       if(first!='0' && sz==5)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
}
