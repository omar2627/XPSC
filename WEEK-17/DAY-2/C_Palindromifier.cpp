/*
PBL --> https://codeforces.com/contest/1421/problem/C?fbclid=IwAR3mVnS__OE5WsKa4olM4lKsHsBkCnFw4FO9LKlPZU5XLejCXagsvp0bWqc

abcd
L--> babcd                 ( L(1st) operation chaliye index=2 dore)
R--> babcdcba           (2nd operation R chaliye index=2 dore)2 theke s.size()-1 porjonto reverse kore string er end e append korbo
R--> babcdcbab          ( last e s.size*2-1 ke R mane 2nd operation kore s er end e append kore dibo

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
cout<<3<<endl;
 cout<<"L "<<2<<endl;
 cout<<"R "<<2<<endl;
 cout<<"R "<<s.size()*2-1<<endl;
    }
