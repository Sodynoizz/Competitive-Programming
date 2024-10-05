#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vii = vector<pair<int, int>>;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    bool check = true;
    int a, b, c; cin >> a >> b >> c;
    for (int i = 1; i <= 100; i++) {
        if (a % i == 0) {
            int e = a / i;
            for (int j = -100; j <= 100; j++) {
                if (j == 0) continue;
                if (c % j == 0) {
                    int d = c / j;
                    if ((i * d) + (j * e) == b) {
                        cout << i << ' ' << j << ' ' << e << ' ' << d << ' ';
                        check = false;
                        break;
                    }
                }
            }
        }    
        if (!check) break;
    }
    if (check) cout << "No Solution";
    return 0;
}