#include<bits/stdc++.h>
using namespace std;
/*
ar=5 7 9 10 10 11 16 19
x=Find first occurance of x // if  x is not present -> find the result for the smallest number greater than x
*/
int main()
{
    vector<int>ar={5,7,10,10,11 ,16,19};
    int x;cin>>x;
    int ans=-1;
    int low=0,hi=ar.size()-1;
    while(low<=hi)
    {
        int mid_idx=(low+hi)/2;
        int mid_val=ar[mid_idx];
        if(mid_val<x)
        {
            low=mid_idx+1;

        } // left most mane first occurence chailei ami -> hi=mid_idx dibo
        else if(mid_val>x){
                // evbae na kore mid_val>=q tahole nicher else r dewa lagbe na
         ans=mid_val; // x theke jodi kono value boro pai tare update kore dibo jehetu first bigger value kujtasi tai left e jete thakbo jehetu array ta sorted
            hi=mid_idx-1;
        }
            else{
                ans=mid_val; // jodi x=10 hoi tar first occurence or x=8 hole return korbe 9 and 10 er idx jodi pai tahole kivabe tar first occurence pabo ?? jodi 10 er idx er theke aro 10 er small idx pai tahole seta ans hobe
                // first occurence mane left most x dorkar
                hi=mid_idx-1;
            }
    }
    cout<<ans<<endl;
}
/*
if  x is not present -> find the result for the smallest number greater than x
*/
/*
/*

Lower bound

  int x;cin>>x;
    int ans=-1;
    int low=0,hi=ar.size()-1;
    while(low<=hi)
    {
        int mid_idx=(low+hi)/2;
        int mid_val=ar[mid_idx];
        if(mid_val<q)
        {
            low=mid_idx+1;

        }
        else
        {
        ans=mid_val;
        hi=mid_idx;
        }
    }
    */

