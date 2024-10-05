#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    int n; cin >> n; int a[n];
    long long max = LLONG_MIN; long long min = LLONG_MAX;
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];        
    }

    cout << max << endl << min;
    return 0;
}