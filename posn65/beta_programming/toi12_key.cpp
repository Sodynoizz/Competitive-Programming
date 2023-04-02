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

const int N = 1001;
bool dp[N][N];

string s;

void solve(string a, string b) {
    int m = a.size();
    int n = b.size();
    for (int i = 0; i < N; i++) { for (int j = 0; j < N; i ++) { dp[i][j] = false; } }
    // memset(dp, 0, sizeof(dp));
    cin >> s;
    dp[0][0] = true;
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (dp[i][j]) {
                if (s[i + j] == a[i]) dp[i + 1][j] = 1;
                if (s[i + j] == b[j]) dp[i][j + 1] = 1;
            }
        }
    }   
    if(dp[(int)m][(int)n]) cout<< "Yes\n";
    else cout<< "No\n";
}

int main() {
    cin.tie(0)->ios_base::sync_with_stdio(false);
    string a, b;
    int k;
    cin >> a >> b;
    cin >> k;
    
    while (k--) solve(a, b);
    
    return 0;
}