/*
The Property for doing binary search is --> Monotonous Property

 Monotonous Property -> Always non-decreasing or Always no-increasing emn holei
 jekono point e dariye expected ans bole dite pari ans left e naki right e ace

*/
/*
PBL ;-

Given a value x
Find sqrt(x) without math related libraries

1<=x<=2*10^19
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  x;cin>>x;
    long long low=0,hi=x;
double ans=0;
    while(low<=hi)
    {
         double mid_val=(low+hi)/2.0;
        if(mid_val*mid_val<=x)
        {
            ans=mid_val;
            low=mid_val+1;
        }
        else
        {
            hi=mid_val-1;
        }
    }
    cout<<ans<<endl;
}


