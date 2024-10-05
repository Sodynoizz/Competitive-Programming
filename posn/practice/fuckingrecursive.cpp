#include <bits/stdc++.h>
using namespace std;

double a[11];

int main() {
    a[1] = 1;
    a[12] = 0;
    for (int i = 1; i < 11; i++) a[i] = a[i + 1] * a[i + 1] - 1;
    cout << a[2];
    return 0;
}