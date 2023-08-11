

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++)
{
    cin>>v[i];
}
int q;cin>>q;
while(q--)
{
    int x;cin>>x;
    auto it1=lower_bound(v.begin(),v.end(),x);
    auto it2=(upper_bound(v.begin(),v.end(),x))-v.begin();
    int ans=(it1-v.begin())-1;
    if(it2==n)
    {
        cout<<v[ans]<<" "<<"X"<<endl;
    }
    else
    {
        int ans1=(it2);
        cout<<v[ans]<<" "<<v[ans1]<<endl;
    }
}
}
