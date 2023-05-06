#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    ll a[n], res; cin >> a[0], res = a[0];
    for (int i = 1; i < n; i++) { cin >> a[i]; long long temp = __gcd(res, a[i]); res = (res * a[i]) / temp; }
    cout << res;
}