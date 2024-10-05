#include <bits/stdc++.h>
using namespace std;
#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false)

map<int, int> mpp;
int col, lst = 1, res = 0;
int main() {
    boost; int n, m, val; char c; 
    cin >> n >> m;
    mpp[1] = 0, mpp[n + 1] = 0;
    while (m--) { int a, b; cin >> a >> b; mpp[a]++, mpp[b + 1]--; }
    cin >> c;
    if (c == 'R') val = 0;
    else if (c == 'G') val = 1;
    else val = 2;

    for (auto [idx, ans]: mpp) {
        ans = ((ans % 3) + 3) % 3;
        res += (idx - lst) * ((val - col + 3) % 3);
        lst = idx, col = (col + ans) % 3;
    }
    cout << res;
    return 0;
}