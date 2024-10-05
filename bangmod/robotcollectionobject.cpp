#include <bits/stdc++.h>
using namespace std;

int grid[1005][1005], dp[1005][1005];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
            dp[i][j] = grid[i][j] + max(dp[i - 1][j], dp[i][j - 1]);
        }
    cout << dp[n][m];
}