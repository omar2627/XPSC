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
    int a1,a2,a3,b1,b2,b3;cin>>a1>>a2>>a3>>b1>>b2>>b3;
    vector<int>a={a1,a2,a3};
    vector<int>b={b1,b2,b3};
    sort(a.begin(),a.end(),greater<>());
    sort(b.begin(),b.end(),greater<>());

    string ax="";
    string bx="";
    for(int i=0; i<3; i++)
    {

        ax +=to_string(a[i]);
        bx +=to_string(b[i]);
    }
    int A=stoi(ax),B=stoi(bx);
    if(A>B)
    {
        cout<<"ALICE"<<endl;
    }
    else if(A<B)
    {
        cout<<"BOB"<<endl;
    }
    else
    {
        cout<<"TIE"<<endl;
    }
}
}

