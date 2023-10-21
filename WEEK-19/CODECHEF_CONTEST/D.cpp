/*
PBL -->
*/

#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b)
{
    return (a*b)/__gcd(a,b);
}
int main()
{
    int t;cin>>t;
    while(t--){
        int x,y,op;cin>>x>>y>>op;
        int mnSum=0;
        int x1=x,y1=y;
        for(int i=0; i<op; i++)
        {

            if(x1==y1)break;
            int gcd=__gcd(x1,y1);
            if(x1>y1)
            {
                x1=gcd;
            }
            else
            {
                y1=gcd;
            }
            int Lcm=lcm(x1,y1);
                       if(x1>y1)
            {
                x1=Lcm;
            }
            else
            {
                y1=Lcm;
            }
        }
        cout<<x1+y1<<endl;
    }
}
