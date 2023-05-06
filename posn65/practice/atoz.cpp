#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    char c = 'A';
    for (int i = 0; i < n; i++) {
        if (c > 'Z') c = 'A';
        cout << c++;
    }
}