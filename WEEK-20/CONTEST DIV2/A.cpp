/*
PBL -->
*/
int sum_digit(int n)
{
    int DGS=0;
    while(n>0)
    {
        DGS +=n%10;
        n /=10;
    }
    return DGS;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,k;cin>>x>>k;
        int sum=sum_digit(x);
while(sum%k!=0)
{
    x++;
    sum=sum_digit(x);
}
cout<<x<<endl;
    }
}
