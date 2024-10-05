#include <bits/stdc++.h>

using namespace std;

const int N = 505;
long long n, m, a[N];

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            long long x;
            cin >> x;
            a[j] = max(a[j], x);
        }
    }
    long long ans = 0;
    for (int i = 1; i <= m; i++)
        ans += a[i];
    cout << ans << '\n';
}