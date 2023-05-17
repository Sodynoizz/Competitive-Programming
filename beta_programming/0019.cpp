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

#define MAXN 10

int n, s[MAXN], b[MAXN], best = 1000000000;

int diff(int x, int y) { return x < y ? y - x : x - y; }

void recur(int i, int ss, int bb) {
    if (i == n) {
        if (bb && abs(ss - bb) < best) best = abs(ss - bb);
    } else {
        recur(i + 1, ss, bb);
        recur(i + 1, ss * s[i], bb + b[i]); 
    }
}

int main(void) {
    cin >> n;
    for (int i = 0; i < n; ++i) { cin >> s[i] >> b[i]; }
    recur(0, 1, 0);
    cout << best;
    return 0;
}