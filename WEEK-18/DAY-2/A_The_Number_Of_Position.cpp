/*
PBL --> https://codeforces.com/contest/124/problem/A
*/
/*
n people standing
a people er cheye kom hobe na mane a people fixed babe dariye ace tai sekhane PTR jete parbe na ekhon b people er cheye kom ba shoman people ptr er picone
ache jekhane tader shate exchange korte parbe ptr tai ptr jete parbe (Total-FixedPeople) jodi b people (T-F) theke shoman ba beshi hoi jodi kom hoi tahole b+1 people jete parbe
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;cin>>n>>a>>b;

      if((n-a)>b) // jekhane jawa jabe sei seat gula total seat theke minus kore dibo tar por jegula thakbe segula jodi b theke boro hoi tahole ans hobe b and se jekhane ace setar sum b+1
      {
          cout<<b+1<<endl;
      }
      else
      {
          cout<<n-a<<endl;
      }
}
