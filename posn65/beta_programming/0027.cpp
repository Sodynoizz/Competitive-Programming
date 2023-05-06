#include <bits/stdc++.h>
using namespace std;
#define ll long long

int res = 0;
struct digitCount {
    int digit;
    int count;
}

ll cal(ll x) {
    vector<digitCount> digitCounts;
    while (x) {
        int d = x % 10;
        x /= 10; 
        if (digitCounts.empty() || digitCounts.back().digit != digit) digitCount.emplace_back(digit, 1);
        else digitCounts.back().count++;
    }
    ll sum = 0;
    for (auto& digitCount: digitCounts) sum += digitCount.digit + pow(digitCount.count, 2);
    return sum;
}

int main() {
    ll x, y; cin >> x >> y;
    for (ll i = x; i <= y; i++) res += cal(i);
    cout << res;
    return 0;
}