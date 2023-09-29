/*
PBL --> https://codeforces.com/problemset/problem/1/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m>>a;
    if(n<=a&& m>a) // jekono ekta a theke choto hole
    {
        int val=m/a;
        if(m%a!=0)
            val +=1;
        cout<<val<<endl;
    }
    else if(m<=a&&n>a)
    {
        int val=n/a;
        if(n%a!=0)
            val +=1;
        cout<<val<<endl;
    }
    else if(m<=a&&n<=a)//n,m jodi a er shoman hoi ektai a lagbe
        cout<<1<<endl;
    else // jodi n and m ,, a theke bigger hoi
    {
        int aLagbe=n/a; // row borabo koita a lagbe tar hisab
        if(n%a!=0) // jodi row er length a dara divisible na hoi tahole aro ekta a add kora lagbe
            aLagbe+=1;
        long long baki=m-a; // row bora bor a nia nile sari bora bor a lagbe tar jonno breadth er joto tuku size er a nilam seta m theke badh dia hisab korlam and eke a dia bag dile ekta breadth er a ber korbo

        long long vaL=baki/a; // total koita a breadth e lagbe ta ber korar jonno baki ke a dia bag korlam
        if(vaL>0 && baki%a!=0)  // jodi baki<a hoi tahole vaL=0 hobe... tai vaL jate zero na hoi and baki jodi a dara fully divisible na hoi tahole vaL++ korbo  ( 5/4=1)ashbe but ekhane a lagbe duita a=4
            vaL++;
        if(vaL<1) // jodi vaL zero hoi tahole vaL 1 thakar kotha cilo (0.55=0) hoie jawar karone vaL++ kore dibo
        {
            vaL++;
        }
        int mul=n/a; // vaL ekta sarir breadth er newa shokol row er shokol breadth er jonno koita a Lagbe tar jonno (n/a)*vaL dibo (n/a) diye row te koita a lagbe
        if(n%a!=0)// jodi n%a!=0 mane 5%4!=0 ekhane n/a=1 hobe but a lagbe 2 ta tai mul++ kore tar shate vaL ke multiply korbo
            mul++;
        vaL *=mul;

        long long ans=aLagbe+vaL;  // row borabor koita a lagbe tar hisab
        cout<<ans<<endl;
    }
}
