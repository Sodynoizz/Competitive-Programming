#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0) -> ios_base::sync_with_stdio(false);
    int n; cin >> n;
    float res = 1;
    if (n % 2 == 1) n++;
    int round = n / 2;
    while (round) { res *= n; n--; res /= round; round--; } 
    printf("%.0f", res); // bruh floating point
    return 0;
}