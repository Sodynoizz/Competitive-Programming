#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false);

int main() {
    boost; int n; cin >> n;
    cin >> n; ll now = 1;
    for (int i = 0; i < n; i++) now *= 4;
    cout << now;
    return 0;
}