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

int n, m, ans;
vector<int> v;

void rec(int cur, int res) {
    if (cur == n) return void(ans += (res == m));
    ans += (res == m);
    for (int i = cur + 1; i < v.size(); i++) rec(i, res + v[i]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for (auto &e: v) cin >> e;
    for (int i = 0; i < v.size(); i++) rec(i, v[i]);    
    cout << ans;

    return 0;
}