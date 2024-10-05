#include <bits/stdc++.h>
using namespace std;

int n, a[105], b[105];
int dp[5005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int k;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        for (int j = k; j >= 0; j--)
        {
            if (j - a[i] >= 0)
                dp[j] = max(dp[j], dp[j - a[i]] + b[i]);
        }
    }
    cout << dp[k];
}