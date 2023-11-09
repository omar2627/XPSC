/*
PBL -->
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,q;
    int koto=1;
    while(cin>>n>>q )
    {
        if(n==0 && q==0)
        {
            break;
        }
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        sort(v.begin(),v.end());
        cout<<"CASE# "<<koto<<":"<<endl;
        int finding_val;
        for(int i=0; i<q; i++)
        {
            cin>>finding_val;
            auto it1=v.begin();
            auto it2=lower_bound(v.begin(),v.end(),finding_val);
            int idx=it2-it1;
            if(v[idx]==finding_val && idx<n)
            {
                cout<<finding_val<<" found at "<<idx+1<<endl;
            }
            else
                cout<<finding_val<<" not found"<<endl;
        }
        koto++;
    }
}
