/*
PBL --> https://codeforces.com/contest/1624/problem/B?fbclid=IwAR3zjWCMhIUnusdOJVU9caVKnVn_r7JoVfMQ-5JOfg8b5aF-jFyS91U7qdc
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(a>b && b>c or c>b && b>a && abs(a-b)==abs(b-c))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            long long hobe=abs(a-c)/2+min(a,c);
            long long hobe1=abs(b-c)-min(b,c);
        long long hobe2=abs(a-b);
        if(hobe%b==0 && b<a && b<c)
        {
            cout<<"YES"<<endl;
        }
        }
    }
}
