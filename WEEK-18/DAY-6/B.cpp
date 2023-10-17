/*
PBL -->
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c;cin>>a>>b>>c;
        if(a==b&&b==c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            vector<int>v={a,b,c};
            sort(v.begin(),v.end());
            if(v[0]!=1 && v[1]%v[0]!=0 or v[2]%v[0]!=0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                int koibar=v[1]/v[0];
                koibar +=v[2]/v[0];
                koibar -=2;
                if(koibar<=3)
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
}
