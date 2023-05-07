#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false);
#define endl '\n'

int main() {
    boost; int n; cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--) cout << ' ';
        for (int j = 2 * i - 1; j >= 1; j--) cout << '*';
        cout << endl;
    }
    return 0;
}