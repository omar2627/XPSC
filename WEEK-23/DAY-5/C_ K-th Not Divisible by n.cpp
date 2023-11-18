/*
PBL --> https://codeforces.com/contest/1352/problem/C

OMAR
*/
/*
kth number ber koro jader modder number gulo not divisible by n

n=3 k=7
1 2 4 5 7 8 10 11 13 14

eder modde 7th number=10 eta kivabe ber korbo?

jodi (n>k) tahole ans hobe k because n=5 k=4 ekhane 5 dara divisible hobe 5 theke bigger number so kth hobe k number

if 14 number porjonto koto gula number ace jegula ke n dara divide kora jai  ans=(14/n) r koto gula n dara divisible na ans=(14-(14/n))

   emn ekta number ber korte hobe jeta kth position hobe emn number pabo jodi (num-num/n)==k hoi
   num=10 n=3 k=7
   (10-(10/3))== k hobe
   ans theke n dara divisible number gula ke badh dile jodi k er shoman hoi tahole shetai KTH position hobe...
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int kth;
        int left=0,right=2e9;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(mid-(mid/n)>=k) //
            {
                kth=mid;
                right=mid-1;

            }
            else
            {
                left=mid+1;
            }
        }
cout<<kth<<endl;
    }
}

// Another code
/*
kth value ber korto bollo kth value ber korsi emn value badh disi jegula n dara divisible na ekhon kth value hobe sheta (KTH+X)
X=KTH value porjonto joto gula number n dara divisible na segula kth er  shate plus korlei kth value peye jabo
X=(KTH_VALUE/N)
KTH_VALUE= KTH+X
X=(KTH+X)/N
X=K/(N-1)
K=7 N=3
Jehetu shob serial wise hoi 1,2,3,4,5,6...... sehetu kth=4 hole ans-4 howar kotha jodi n>k hoto but n=2 hole badh jabe 2,4 jarpole amk aro shamne jete hobe jotokkon na kth value pai r badh jabe
n dara divisible gula ekhon segula ke jodi kth er shate plus kori taholei ans peye jai
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
if(n>k)
{
    cout<<k<<endl;
}
else
{
    int adding_value=k/(n-1);
    int kth_value=k+adding_value;
    if(kth_value%n==0)
    {
        cout<<kth_value-1<<endl;
    }
    else
    {
        cout<<kth_value<<endl;
    }
}
    }
}
