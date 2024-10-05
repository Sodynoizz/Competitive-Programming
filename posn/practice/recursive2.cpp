#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// int recur(ll n) {
//     if (n == 1) return 2023;
//     if (n == 2) return 2566;
//     return abs(recur(n - 1)) - recur(n - 2);
// }


int main() {
    int a[500];
    a[1] = 2023, a[2] = 2566;
    for (int i = 3; i <= 444; i++) {
        a[i] = abs(a[i - 1]) - a[i  - 2];
    }
    cout << a[444];
}