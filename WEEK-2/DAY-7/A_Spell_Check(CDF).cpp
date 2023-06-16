/*
problem link -->  https://codeforces.com/contest/1722/problem/A
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
        string s;
        cin>>s;
        int t=0,I=0,M=0,U=0,R=0;
        for(int i=0; i<5; i++)
        {
                  if(s[i]=='T')
                  {
                      t++;
                  }
                  else if(s[i]=='i')
                  {
                      I++;
                  }
                  else if(s[i]=='m')
                  {
                      M++;
                  }
                  else if(s[i]=='u')
                  {
                      U++;
                  }
                  else if(s[i]=='r')
                  {
                      R++;
                  }
        }
         if(t==1 && R==1 && I==1 && M==1 && U==1 && n==5)
        {
            cout<<"YES"<<endl;
        }
        else
        {
                  cout<<"NO"<<endl;
        }
    }
}
