/*
PBL -->
*/


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, q, query;
        cin >> n >> q;

        vector<vector<int>> bit_n_ids(31);
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            bit_n_ids[__builtin_ctz(a[i])].push_back(i);
        }

        for(int i = 0; i < q; i++) {
            cin >> query;
            for(int j = query; j <= 30; j++) {
                for(auto id : bit_n_ids[j]) {
                    a[id] += (1 << (query - 1));
                    bit_n_ids[query - 1].push_back(id);
                }
                bit_n_ids[j].clear();
            }
        }

        for(int i = 0; i < n; i++) cout << a[i] << " \n"[i == n - 1];
    }

    return 0;
}
