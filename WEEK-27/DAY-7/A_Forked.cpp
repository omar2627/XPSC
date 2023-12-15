/*
PBL --> https://codeforces.com/contest/1904/problem/A
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;cin>>t;
    while(t--){
        ll a,b,Xk,Yk,Xq,Yq;
        cin>>a>>b>>Xk>>Yk>>Xq>>Yq;
        vector<ll>dx={a,a,-a,-a,b,b,-b,-b};
        vector<ll>dy={b,-b,b,-b,a,-a,a,-a};
        set<pair<ll,ll>>atckK,atckQ;
        for(int i=0; i<8; i++){
            atckK.insert({Xk+dx[i],Yk+dy[i]});
            atckQ.insert({Xq+dx[i],Yq+dy[i]});
        }
        int total_same_pos=0;
        for(auto i:atckK)
        {
            if(atckQ.find(i)!=atckQ.end())total_same_pos++;
        }
        cout<<total_same_pos<<endl;
    }
}
