/*
PBL --> https://codeforces.com/problemset/problem/1370/A?fbclid=IwAR24wEKtoN1FSAiXoUsKyxtieSJK4hXAz_3sjrDNqd9jEF6xPrLfS_t4j4w
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n<=3)cout<<1<<endl;
        else
        {
            if(n%2==0)
            {
                cout<<(n/2)<<endl;
            }
            else
            {
                cout<<(n-1)/2<<endl;
            }
        }
    }
}
