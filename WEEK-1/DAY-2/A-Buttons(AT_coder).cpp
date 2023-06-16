/*
 problem link ---> https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int m1=(a-1+a),m2=(b-1+b),m3=(a+b);
    int ans=max({m1,m2,m3});
    cout<<ans;
}
