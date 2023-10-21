/*
PBL --> https://codeforces.com/problemset/problem/1475/A?fbclid=IwAR3QPp_nu1JO3Fwl_gi3O6y6hBJsg9JNuPD1bkL8ywx8qcgk59oJwW0DPJ8
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long n;cin>>n;
       if(n%2!=0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           bool hobe= false;
       for(int i=3; i<=11; i+=2)
       {
           if(n%i==0)
           {
               hobe =true;
           }
       }
       if(hobe)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       }

    }
}
