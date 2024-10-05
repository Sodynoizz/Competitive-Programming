#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false)

bool mp[100000005];

int main() {
    boost; int n, m, q;
    cin >> n >> m >> q;
    mp[1] = 0, mp[n + 1] = 0;
    while (m--) {
        int a, k; cin >> a >> k;
        mp[a - 1] = !mp[a - 1];
        mp[a + k - 1] = !mp[a + k - 1];
    } 
    while (q--) {
        int x; cin >> x;
        int l = x - 1, r = x;
        while (l && !mp[l]) l--;
        while (r < n && !mp[r]) r++;
        cout << r - l<< endl;
    }
    return 0;
}