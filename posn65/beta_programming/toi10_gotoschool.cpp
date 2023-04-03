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
#define vii vector<int, int>
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(x) (x).begin() , (x).end()

bool mapping[55][55];
ll dp[55][55];

int main () {
    int m,n,o,x,y;
    cin >> m >> n >> o;
    for (int i = 0 ; i < o ;i++) cin >> x >> y , mapping[x][y] = true;
    dp[1][1] = 1;
    for (int i = 1 ; i <= m ;i++)
        for (int j = 1 ; j <= n ;j++){
            if (mapping[i][j])
                dp[i][j] = 0;
            else
                dp[i][j] += dp[i][j-1] + dp[i-1][j];
        }
    cout << dp[m][n];
}