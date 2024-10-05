#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false)

int main() {
    boost; int n, flag = 0; cin >> n; int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i < n; i++){ if (!((a[i] + a[i - 1]) % 3)) flag = 1; }  
    if (flag) cout << "possible";
    else cout << "impossible";
    return 0;
}