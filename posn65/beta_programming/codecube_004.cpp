#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    long long int a[n], div, sum = 0; cin >> a[0], div = a[0];
    for (int i = 1; i < n; i++) cin >> a[i], div = __gcd(div, a[i]);
    for (int i = 0; i < n; i++) sum += a[i] / div;
    cout << sum;
    return 0;
} 