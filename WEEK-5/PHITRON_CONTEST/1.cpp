/*
PBL --> https://vjudge.net/contest/568191#problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    int k;
    cin>>n>>k;
    long long digit=n;
    for(int i=0; i<k; i++)
    {
        long long x=digit%10;
        if(x>0)
        {
            digit -=1;
        }
        else
        {
            digit=digit/10;
        }
    }
    cout<<digit<<endl;
}
