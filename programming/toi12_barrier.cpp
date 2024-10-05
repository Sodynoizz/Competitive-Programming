#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false)
#define endl '\n'

int main() {
    boost; int n, m, cur_sum = 0, st = 0, maxval = INT_MIN, cnt = 0; cin >> n >> m; int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        cur_sum += a[i], cnt++;
        if (cnt > m) cur_sum -= a[st], st++, cnt--;
        if (cur_sum > maxval) maxval = cur_sum;
        if (a[i] <= m && a[i] > maxval) cnt = 1, maxval = a[i];
    }
    if (maxval > 0) cout << maxval << endl << cnt;
    else cout << "0\n0";
    return 0;
}