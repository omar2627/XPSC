
/*
eps 1e-6=0.000001
*/

#include<bits/stdc++.h>
using namespace std;
#define eps 1e-6  // 0.000001 er low and hi er difference er theke kom holei break etotuku diff e thaka mane low and hi equal prai --> SEMICOLON DEWA JABE NA LAST E
int main()
{
    int x;cin>>x;
double low=0,hi=x;
while(hi-low>=eps) // low hi eto shohoje shoman na hobe doshomik er karone ,, or low > hi o hobe na
{
    double mid_val=(low+hi)/2.0;
    if(mid_val*mid_val>x)
    {
        hi=mid_val;// -1 dinai karon decimal 1 er modde onk digit ace tar modde possible answer o thakte pare
    }
    else
    {
        low=mid_val;
    }
}
cout<<hi<<" "<<sqrt(x)<<endl;//  hi holo answer
}
