#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false);

int main() {
    boost; int n, m; cin >> n; m = n;
    if (n % 2) n += 1;
    for (int i = 1; i <= n / 2; i++) { for (int j = 1; j <= i; j++) cout << '*'; cout << endl; }
    for (int i = m / 2; i >= 1; i--) { for (int j = i; j >= 1; j--) cout << '*'; cout << endl; }
    return 0;
}