/*
PBL  -->  https://codeforces.com/contest/1843/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(n==1 && n>0)
        {
            cout<<n<<" "<<0<<endl;
            continue;
        }
        else if(n==1 && n<0)
        {
            cout<<n*(-1)<<" "<<1<<endl;
            continue;
        }
       int x=0,cnt=0;
       while(x<n)
       {
           int i=x;
           if(a[x]<0)
           {
               cnt++;
           }
           if(a[i]<=0 && i<=n)
           {
               while( (a[i]<0) && (a[i+1]==0 || a[i+1]<0) && ((i+1)<n))
           {
               a[i]=a[i]*(-1);
               i++;
           }
           }

            x++;
           i=0;
           x +=i+1;
       }
       long long sum=0;
       for(int i=0; i<n; i++)
       {
           cout<<a[i]<<" ";
           sum +=a[i];
       }
       cout<<endl;
       cout<<sum<<" "<<cnt<<endl;
       cnt=0;
       sum=0;
    }
}
