/*
PBL -->  https://codeforces.com/contest/1714/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0;
        string s;
        for(int i=9; i>=1; i--)
        {
            if(i<=n)
            {
                sum +=i;
            }
             if(sum<=n && i<=n)
             {
                 s +=to_string(i);
             }
            if(sum>n)
             {
                 sum -=i;
             }
            if(sum==n)
            {
                break;
            }
        }
       reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
}
