/*
PBL  -->  https://www.codechef.com/problems/CS2023_PON
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int anD = -1;
        for(int i=0; i<n; i++)
        {
            if((v[i] & k) == k )
            {
                anD &= v[i];
            }
        }
        if(anD == k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
