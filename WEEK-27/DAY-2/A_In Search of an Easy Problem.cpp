/*
PBL -->
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    bool hobe=true;
    for(int i=0; i<n; i++)
    {
        if(v[i]==1)
        {
            hobe=false;
            break;
        }
    }
    if(hobe)
    {
        cout<<"EASY"<<endl;
    }
    else
        cout<<"HARD"<<endl;
}
