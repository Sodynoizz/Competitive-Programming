#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(0)->ios_base::sync_with_stdio(false);
#define endl '\n'

int k, a, b;
string ans;

void result(int w, int l, string c) {
    if (w == k || l == k) { cout << c << endl; return; }
    result(w + 1, l, c + "W ");
    result(w, l + 1, c + "L ");
}

int main() {
    boost;
    cin >> k >> a >> b;
    result(a, b, "");
    return 0;
}