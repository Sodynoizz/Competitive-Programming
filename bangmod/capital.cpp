#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define f first
#define s second

int n;
vector<pii> adj[10005];
int dis[10005];

void dfs(int u, int p)
{
    for (pii x : adj[u])
    {
        int v = x.f, dd = x.s;
        if (p == v)
            continue;
        dis[v] = dis[u] + dd;
        dfs(v, u);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    dis[1] = 0;
    dfs(1, 1);
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        mx = max(mx, dis[i]);
    }
    cout << mx;
}