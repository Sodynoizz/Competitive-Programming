#include<bits/stdc++.h>

using namespace std;

const int N = 1005, M = 1e9 + 7;
int n, dp[N];

int main() {
    scanf("%d", &n);
    dp[0] = 1, dp[1] = 0, dp[2] = 5, dp[3] = 8;
    for (int i = 4; i <= n; i++) {
        for (int j = 1; j < i; j++) dp[i] += dp[j] + dp[i - j], dp[i] %= M;
        dp[i] %= M;
    }
    printf("%d", dp[n]);
}