#include <bits/stdc++.h>
using namespace std;

// i = 1, v = 5, x = 10, l = 50, c = 100
int i, v, x, l, c;

int main() {
    int n; cin >> n;
    while (n--) {
        int bruh = n + 1;
        while (bruh) {
            if (bruh >= 100) c++, bruh -= 100;
            else if (bruh >= 90) c++, x++, bruh -= 90;
            else if (bruh >= 50) l++, bruh -= 50;
            else if (bruh >= 40) l++, x++, bruh -= 40;
            else if (bruh >= 10) x++, bruh -= 10;
            else if (bruh >= 9) x++, i++, bruh -= 9;
            else if (bruh >= 5) v++, bruh -= 5;
            else if (bruh >= 4) v++, i++, bruh -= 4;
            else i++, bruh--;
        }
    }
    cout << i << ' ' << v << ' ' << x << ' ' << l << ' ' << c;
    return 0;
}