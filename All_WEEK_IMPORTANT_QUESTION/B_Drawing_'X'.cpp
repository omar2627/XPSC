/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            if(i==j && i!=n/2 && j!=n/2)
            {
                cout<<"\\";
            }
          else if(i==n/2 && j==n/2)
          {
              cout<<"X";
          }
            else if(i+j==n-1)
            {
                cout<<"/";
            }
            else
            {
                cout<<"*";
            }

        }
        cout<<endl;
    }
}
