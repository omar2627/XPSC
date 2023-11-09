/*
1) Given an array A of size N
Assume array is sorted
2) You will be given Q queries
3) For each query you will be given X
4) You have to answer how many numbers are There in array A

1<=N<=10^6
1<=Q<=10^6
1<=L<=R<=10^6
1<=A[i]<=10^6

For each X;

int cnt=0;
for(int i=0; i<n; i++)if(ar[i]==x)cnt++;
    printf(%d, cnt);

    etar complexity koto

    per query te O(n) loop chalachhi

    O(Q*N)=O(1000*1000)=O(10^6); eta 1 second e pass korbe
    If N=10^5 and Q=10^5

    tahole TC=O(10^5*10^5)=O(10^10)>1 second;

    ****
    Now solution optimize way map or Binary Search


    Per query te x koita ace tar ans dibo


    Each query --> cout<<upper_bound(x)-lower_bound(x)

    3 4 5 5 5 8
    upper_bound(5)-lower_bound(5)=> 5-2 => 3 ta 5 er occurence ace

    upper_bound(6)-upper_bound(6)=> 5-5 => 0


    */


    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,q;cin>>n>>q;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];

    }
