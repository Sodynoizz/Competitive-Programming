#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false)

int a, b, c[1000005], cnt = 0, mx = 0;

int main() {
    boost; int n; cin >> n;
    while (n--) cin >> a >> b, c[a]++, c[b]--; 
    for (int i = 0; i < 1000000; i++) cnt += c[i], mx = max(cnt, mx);
    cout << mx;
    return 0;
}