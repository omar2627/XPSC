/*
PBL --> https://codeforces.com/contest/1895/problem/C
OMAR
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool myComp(string &a,string &b){
return a.size()<b.size();
}
  int main()
  {
      int n;cin>>n;
      vector<string>s(n);

      for(int i=0; i<n; i++){
       cin>>s[i];
      }
      ll ans=n;
      map<pair<ll,ll>,ll>mp;
      sort(s.begin(),s.end(),myComp); // shobar first e choto size calculation korle shubida hobe, jehetu string lexicograpically sort kore tai custom comparator use kora hoise
      for(auto st:s){
        int sz=st.size();
        for(int i=1; i<=sz; i++)
        {
            if((sz+i)%2!=0)continue;// sz=5 hole i=2 hole odd string hobe jar pole possible na same length er duita part kora tai even hote hobe sz=2 hole evn korte gele i=2,4 hote parbe but 4 hobe na jehetu 4 sz er kono string ekhono jai nai karon string gula sort akare ace

               int mid=(sz+i)/2; // mid ber korsi karon amdr first part er sum jana lagbo setar sum pele 2nd e i length er value er sum koto add kora lagbe ta ber kora lagbe
               ll sum=0;
               for(int j=0; j<mid; j++)sum +=(st[j]-'0');
               // 543_ duita part er jonno ekta value add korte hobe ekhon koto add korle duita part er sum same hobe (5+4)=9 first part er sum ekhan theke 2nd part er value gula minus korlei koto add korte hobe ta jante parbo
              for(int j=mid; j<sz; j++)sum -=(st[j]-'0'); // sum=9 loop cholar por hobe sum=6 emn ekta value lagbe jar sum 6
              if(sum>=0) // sum minus hote pare mane 125 _ first part sum=1+2=3 second part e sum2=5 koto plus  korle 3 er shoman hobe ja possible na karon jei value add korbo ta minus hote parbe na
              {
                  ans +=mp[{i,sum}];
              }

        }
        reverse(st.begin(),st.end()); // 456 ekhane jmn ekta value seshe add kore check kortasi  sei babe first e boshai check korte hobe x value jodi first e boshai emn hobe x456=654x same kotha tai reverse korsi amr (x+4) ba (4+x) dorkar
         for(int i=1; i<=sz; i++)
        {
            if((sz+i)%2!=0)continue;
               int mid=(sz+i)/2;
               ll sum=0;
               for(int j=0; j<mid; j++)sum +=st[j]-'0';

              for(int j=mid; j<sz; j++)sum -=st[j]-'0';
              if(sum>=0)
              {
                  ans +=mp[{i,sum}];
              }

            }
               ll str_sum=0;
        for(int i=0; i<sz; i++) str_sum +=st[i]-'0';
                mp[{sz,str_sum}]++;
        }
     cout<<ans<<endl;
      }


