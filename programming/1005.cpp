#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int a[3005];
vector<int> u, v;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, k = 0, mx = 0; cin >> n;
    for (int i = 0; i < n; i++) { 
        cin >> a[i], k += a[i]; 
        v.emplace_back(a[i]);
        if (mx < k) mx = k, u = v;
        if (k < 0) v.clear(), k = 0; 
    }
    if (u.empty()) cout << "Empty sequence";
    else { for (auto e: u) { cout << e << ' '; } cout << endl << mx; }    
    return 0;
}