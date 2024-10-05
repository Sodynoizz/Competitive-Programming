#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'
using pii = pair<int, int>;

int main()
{
    ios_base::sync_with_stdio(false);
    ll n, ans1, temp = INT_MIN;
    cin >> n;
    pii a[n];
    ll dp[n], dp2[n];
    char ans2;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    // dp left
    for (int i = 0; i < n; i++)
    {
        dp2[i] = 0;
        for (int j = i - 1; j >= 0 && a[j].first > a[i].first - a[i].second; j--)
        {
            dp2[i] = max(dp2[i], dp2[j] - j + i - 1);
        }
        dp2[i]++;
        if (temp < dp2[i])
        {
            temp = dp2[i];
            ans1 = i;
            ans2 = 'L';
        }
    }
    // dp right
    for (int i = n - 1; i >= 0; i--)
    {
        dp[i] = 0;
        for (int j = i + 1; j < n && a[j].first < a[i].first + a[i].second; j++)
        {
            dp[i] = max(dp[i], dp[j] + j - i - 1);
        }
        dp[i]++;
        if (temp < dp[i])
        {
            temp = dp[i];
            ans1 = i;
            ans2 = 'R';
        }
        else if (temp == dp[i] && i < ans1)
        {
            ans1 = i;
            ans2 = 'R';
        }
    }
    cout << ans1 + 1 << ' ' << ans2;
}