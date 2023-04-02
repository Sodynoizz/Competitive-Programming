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
#define vii vector<int, int>
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(x) (x).begin() , (x).end()

struct data {
    int l, r, v;
} d[1<<10];

int n, amt;
char c;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
vector<char> m(10);

void dfs(int loc, int val) {
    if (__builtin_popcount(loc) == 1) {
        bitset<4> b = val;
        cout << m[log2(loc)] << ' ' << b << '\n';
        return;
    }
    int nl = d[loc].l, nr = d[loc].r;
    dfs(nl, 2 * val); dfs(nr, 2 * val + 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m[i] >> amt;
        d[1 << i].l = -1; d[1 << i].r = -1;
        d[1 << i].v = amt;
        pq.emplace(amt, 1 << i);
    }
    while (pq.size() > 1) {
        auto [fv, fl] = pq.top(); pq.pop();
        auto [sv, sl] = pq.top(); pq.pop();
        int nl = fl + sl, nv = fv + sv;
        d[nl].l = fl;
        d[nl].r = sl;
        d[nl].v = nv;
        pq.emplace(nv, nl);
    }
    dfs((1 << n) - 1, 0);
    return 0;
}