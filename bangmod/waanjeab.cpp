#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pii = pair<int, int>;

const int N = 1e5 + 5;
int q, n, x, y, a[N], pref[N];

void solve()
{
    cin >> n >> x >> y;
    pref[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i], pref[i] = pref[i - 1] + a[i];
    vector<int> v;
    deque<pii> dq;
    for (int i = x; i <= n; i++)
    {
        while (!dq.empty() && dq.back().first < i - y)
            dq.pop_back();
        while (!dq.empty() && dq.front().second > pref[i - x])
            dq.pop_front();
        dq.emplace_front(i - x, pref[i - x]);
        if (!dq.empty())
            v.emplace_back(pref[i] - dq.back().second);
    }
    int mx = 0;
    for (auto &e : v)
        mx = max(mx, e);
    cout << mx << '\n';
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> q;
    while (q--)
        solve();
}