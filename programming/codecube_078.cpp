#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false);

int main() {
    boost; int x, sum = 0, a[7]; cin>> x;
    bool flag = false; 
    for (int i = 0; i < 5; i++) { cin >> a[i]; if (a[i] > x) flag = true; sum += a[i]; }
    if (flag) { cout << "-1"; return 0; }
    else {
        if (sum == x) { for (int i = 0; i < 5; i++) cout << a[i] << ' '; return 0; }
        for (int i = 0; i < 5; i++) if (sum - a[i] == x) { a[i] = 0; break; }
        for (int i = 0; i < 5; i++) cout << a[i] << ' '; return 0;
    }
    return 0;
}