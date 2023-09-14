/*
PBL --> https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
bool Possible(int n,int x,int y,int t)
{
    if(t<min(x,y))
    {
        return false;
    }
    int cnt=1;
    t -=min(x,y);
    cnt +=t/x + t/y;
    return cnt>=n;
}
int main()
{
    int n,x,y;cin>>n>>x>>y;
    int l=0,r=max(x,y)*n,mid;
    while(l+1 <r)
    {
        mid=l+(r-l)/2;
        if(Possible(n,x,y,mid))
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    cout<<r<<endl;
}
