#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        int m; cin >> m;
        int a[m + 5];
        for (int i = 0; i < m; i++) cin >> a[i];
        sort(a, a + m);
        for (int i = 0; i < m; i+=2) { if (a[i] != a[i + 1]) { cout << a[i] << endl; break; }}
    }
    return 0;
}