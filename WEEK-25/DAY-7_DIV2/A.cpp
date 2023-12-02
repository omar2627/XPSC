/*
PBL -->
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        bool ans=true;
        for(int i=0; i<n-1; i++)
        {
            if(v[i]>v[i+1])
            {
                ans=false;
                break;
            }
        }
        if(k>1 or ans==true)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
