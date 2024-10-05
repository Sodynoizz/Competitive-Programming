#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, res = 0; cin >> n;
    bool vis[1005][1005] = {false, false};
    for (int i = 0; i < n; i++) { int a, b; cin >> a >> b; if (!vis[b][a]) res++, vis[b][a] = true; } 
    cout << res;
    return 0;
}