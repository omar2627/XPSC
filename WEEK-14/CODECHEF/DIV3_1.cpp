
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        int net1=a1-a2;
        int net2=b1-b2;
        int com_net=net1+net2;
        if(com_net>=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
