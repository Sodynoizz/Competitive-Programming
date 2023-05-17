#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(NULL)->ios_base::sync_with_stdio(false)
using pii = pair<int, int>;

int main() {
    boost;
    int n, minval = INT_MAX, sum = 0; cin >> n;
    vector<pii> v(n + 5, make_pair(0, 0));
    
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        for (int j = x; j <= y; j++) {
            for (int k = 1; k < j; k++) {
                sum += 0;
            }
            // minval = min(minval, )
        }
    }    
}