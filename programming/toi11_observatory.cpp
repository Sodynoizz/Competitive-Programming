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

int n, m, k;
int mx = -INT_MAX;
int a[2005][2005], b[2005][2005], c[2005][2005], d[2005][2005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m >> k;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> c[i][j];
            a[i][j] = a[i - 1][j - 1] + b[i][j - 1] - b[i - 1][j - 1] + c[i][j];
            b[i][j] = b[i][j - 1] + b[i - 1][j] - b[i - 1][j - 1] + c[i][j];
        }
        for (int j = m; j >= 1; j--) { 
            d[i][j] = d[i - 1][j + 1] + c[i][j] + b[i][m] - b[i - 1][m] - b[i][j] + b[i - 1][j]; 
        }
    }

    for (int i = k; i <= n; i++) {
        for (int j = k; j <= m; j++) { mx = max(mx, a[i][j] - a[i - k][j - k] - b[i][j - k] + b[i - k][j - k]); }
        for (int j = m + 1 - k; j > 0; j--) { mx = max(mx, d[i][j] - d[i - k][j + k] - b[i][m] + b[i - k][m] + b[i][j + k - 1] - b[i - k][j + k - 1]); }
    }

    cout << mx; // T_T
    return 0;
}