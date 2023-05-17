#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vii = vector<pair<int, int>>;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    double ans = 0;
    vector<int> x, y;

    for (int i = 0; i < n; i++) { int m, n; cin >> m >> n; x.push_back(m), y.push_back(n); }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = i + 1; k < n; k++) {
                double area = (x[i] * y[j]) + (x[j] * y[k]) + (x[k] * y[i]); 
                area -= (y[i] * x[j]) + (y[j] * x[k]) + (y[k] * x[i]);
                area = abs(area) / 2;
                ans = max(ans, area);
            }
        }
    }
    cout << fixed << setprecision(3) << ans;
    return 0;
}