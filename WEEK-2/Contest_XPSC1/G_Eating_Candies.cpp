/*
problem link -->  https://vjudge.net/contest/563208#problem/G
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
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int i=0,j=n-1,w1=a[0],w2=a[n-1],cnt=0,x=0;
        while(true)
        {
            if(i==j)
            {
                cout<<i<<" "<<j<<endl;
                break;
            }
          if(w1==w2 && i>0)
          {
              break;
          }
            if(i<1 && w1==w2)
            {
                cnt +=2;
                break;
            }
            else
            {
                cnt +=2;
                i++;
                j--;
            }
            if(w1<w2 && i!=0)
            {
             x=1;
            }
            else if(w1>w2 && i!=0)
            {
                x=0;
            }
        if(x==1)
        {
            w1+=a[i];
            i++;
        }
        else if(x==0)
        {
            w2+=a[j];
            j--;
        }
        x=0;
        }
        if(w1==w2)
        {
            cout<<w1<<" "<<w2<<endl;
            cout<<cnt<<endl;
        }
        else
        {
                        cout<<w1<<" "<<w2<<endl;

            cout<<0<<endl;
        }
        w1=0;
        w2=0;
        cnt=0;
        i=0;
        j=0;
}
}
