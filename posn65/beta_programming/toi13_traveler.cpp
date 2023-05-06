#include <bits/stdc++.h>
using namespace std;
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x:v) os << sep << x, sep = ", "; return os << '}'; }

void dbg_out() { cerr << endl; }
template<typename Head, typename ... Tail> void dbg_out(Head H, Tail ... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << '(' << #__VA_ARGS__ << '):', dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define long long ll
#define pii pair<int, int>
#define mii map<int, int>
#define vii vector<pair<int, int>>
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(x) (x).begin() , (x).end()

vii adj;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m, lim; cin >> n >> m >> lim;
    priority_queue<pii, vii, greater<pii>> pq;
    vector<int> mindis(n, INT_MAX);   

    for (int i = 1; i <= m; i++) {
        int u, v, w; cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(v, w);
    }

    mindis[st] = 0;
    while (!pq.empty()) {
        int dis = pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        for (auto i: adj) {
            int next = i.first; 
            int tot = dis + i.second; 
            if (mindis[next] > tot) { mindis[next] = tot; pq.emplace(tot, next)};
        }
    }   




    
    return 0;
}