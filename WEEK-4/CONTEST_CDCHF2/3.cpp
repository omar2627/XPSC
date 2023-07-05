/*
PBL -->  https://www.codechef.com/START97D/problems/DICEGAME2
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v(3),c(3);
        for(int i=0; i<3; i++)
        {
            cin>>v[i];
        }
        for(itn i=0; i<3; i++)
        {
            cin>>c[i];
        }
sort(v.begin(),v.end());
int al=0;
al+=v[2]+v[1];
sort(c.begin(),c.end());
int bob=0;
bob +=c[2]+c[1];
if(al>bob)
{
    cout<<"ALICE"<<endl;
}
else if(al<bob)
{
    cout<<"BOB"<<endl;
}
else
{
    cout<<"TIE"<<endl;
}
    }
}
