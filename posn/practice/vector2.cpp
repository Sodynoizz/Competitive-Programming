#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a[5];
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int y; cin >> y;
        v.push_back(y);
    }
    for (auto c: v) cout << c;
    cout << *min_element(v.begin(), v.end()) << endl;
    cout << *max_element(v.begin(), v.end()) << endl;
}