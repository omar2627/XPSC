/*
problem link -->  https://codeforces.com/problemset/problem/102/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
       int sum=0,digit=n,cnt=0;
       while(digit>1)
       {
           while(digit!=0)
           {
               int last_digit=digit%10;
               sum +=last_digit;
               digit=digit/10;
           }
           cnt++;
           digit=sum;
           sum=0;
       }
       cout<<cnt;

}
