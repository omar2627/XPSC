#include<bits/stdc++.h>
using namespace std;
/*
ar=4 6 7 8 9
x=4
x theke boro smallest value ber koro BS er maddome korbo
Upper Bound
*/

int main()
{
    vector<int>ar={4,6,7,8,9};
    int x=4; // now we calculate upper bound of x =6;
    int ans=-1;
    int low=0,hi=ar.size()-1;
    while(low<=hi)
    {
        int mid_idx=(low+hi)/2;
        int mid_val=ar[mid_idx];
        if(mid_val<=x)
        {
            low=mid_idx+1;
        }
        else
        {
            ans=mid_val;
            hi=mid_idx-1;
        }
    }
    cout<<ans<<endl;
}
