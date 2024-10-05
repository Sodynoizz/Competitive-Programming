#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false)

const int N = 1e6 + 5;
int a[N], l[N]; 

int main() {
    boost; int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) l[i] = max(l[i - 1], a[i]); // l
    for (int i = n; i >= 1; i--) a[i] = max(a[i + 1], a[i]); // r
    for (int i = 1; i < n; i++) cout << min(l[i], a[i + 1]) << ' ';
    return 0;
}