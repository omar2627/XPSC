/*
PBL --> https://www.codechef.com/problems/ONEORTWO
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y;
        cin>>x>>y;
        if(x==y)
        {
            if(x%2!=0)
            {
                cout<<"CHEF"<<endl;
            }
            else
           {
                           cout<<"CHEFINA"<<endl;
           }
        }
        else if(x>y && (x-y)>=2)
        {
            cout<<"CHEF"<<endl;
        }
        else if((y-x)>=2)
        {
            cout<<"CHEFINA"<<endl;
        }
        else if(abs(x-y)==1)
        {
          if(x>y)
          {
                          if(x%2==0)
            {
                cout<<"CHEF"<<endl;
            }
            else
            {
                cout<<"CHEFINA"<<endl;
            }
          }
          else
          {
              if(x%2==0)
              {
                  cout<<"CHEFINA"<<endl;
              }
              else
              {
                  cout<<"CHEF"<<endl;
              }
          }
        }
    }
}
