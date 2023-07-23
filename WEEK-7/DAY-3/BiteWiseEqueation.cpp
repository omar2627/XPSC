/*
PBL -->  https://www.codechef.com/problems/BITEQU
*/
/*
(a&b)--> 2 er power er jekono duita number er and operation korle zero
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;

        if(n==0)
        {
            cout<<1<<" "<<3<<" "<<6<<" "<<7<<endl;
        }
        else if(n==1)
        {
            cout<<3<<" "<<4<<" "<<7<<" "<<6<<endl;
        }
       else if(n%2==0)
        {
              long long a=pow(2,32);
              long long b=pow(2,33);
            cout<<a<<" "<<b<<" "<<1<<" "<<(n+1)<<endl;
        }
        else
        {
              long long a=pow(2,32);
           long long b=pow(2,33);
            cout<<a<<" "<<b<<" "<<1<<" "<<(n-1)<<endl;
        }
    }
}
