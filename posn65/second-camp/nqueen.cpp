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

const int N = 10;
int n;
bool f[N][N];

bool check(int x, int y) {
    for (int i = 1; i <= n; i++) { if (f[i][y]) return false; }
    for (int j = 1; j <= n; j++) { if (f[x][j]) return false; }
    int c1x = x, c2x = x, c3x = x, c4x = x;
    int c1y = y, c2y = y, c3y = y, c4y = y;
    
    while (c1x >= 1 && c1y >= 1) {if (f[c1x][c1y]) return false; c1x--, c1y--; }
    while (c2x >= 1 && c2y <= n) {if (f[c2x][c2y]) return false; c2x--, c2y++; }
    while (c3x <= n && c3y >= 1) {if (f[c3x][c3y]) return false; c3x++, c3y--; }
    while (c4x <= n && c4y <= n) {if (f[c4x][c4y]) return false; c4x++, c4y++; }
    
    return true;
}

void rec(int x, int y, int cnt) {
    if (cnt == n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (f[i][j]) cout << 'Q';
                else cout << '.';
            }
            cout << '\n';
        }
        exit(0);
    }
    if (cnt > n) return;
    for (int i = 1; i <= n; i++) {
        if (!f[i][y + 1] && check(i, y + 1)) {
            f[i][y + 1] = true;
            rec(i, y + 1, cnt + 1);
            f[i][y + 1] = false;
        }
    }
}   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        f[i][1] = true;
        rec(i, 1, 1);
        f[i][1] = false;
    }
}