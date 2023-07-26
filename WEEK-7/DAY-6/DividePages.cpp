/*
PBL --> https://www.codechef.com/problems/BOOKPAGES
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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int evn=0,odd=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]%2==0)
            {
                evn++;
            }
            else
            {
                odd++;
            }
        }
        if(odd==0)
        {
            cout<<"YES"<<endl;
        }
        else if(evn==0)
        {
           if(odd%2==0)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
        }
        else
        {
            if(evn%2==0 && odd%2==0)
            {
                cout<<"YES"<<endl;
            }
            else if(evn%2==0 && odd%2!=0)
            {
                cout<<"NO"<<endl;
            }
            else if(odd%2==0 && evn%2!=0)
            {
              cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
