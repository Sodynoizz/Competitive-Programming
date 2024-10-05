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

#define ll long long
#define pii pair<int, int>
#define mii map<int, int>
#define vii vector<pair<int, int>>
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(x) (x).begin() , (x).end()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll res = 0;
    int n; cin >> n;
    int a[n], b[n];
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    sort(a + 1, a + n + 1); sort(b + 1, b + n + 1, greater<int>());
    for (int i = 1; i <= n + 1; i++) a[i] = a[i] + b[i];
    sort(a + 1, a + n + 1); 
    for (int i = n - 1; i >= 1; i--) res += abs(a[i] - a[i + 1]);
    cout << res;
    return 0;
}