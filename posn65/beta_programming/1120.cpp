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
const int N = 1e6+5;
int a[N];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, x, y, d, cnt = 0;
    for (int i=1; i<=1e6; i++) {
        for (int j=i; j<=1e6; j+=i) a[j]++;
    }  
    cin >> n;
    while (n--) {
        cnt = 0;
        cin >> x >> y >> d;
        for (int i=x; i<=y; i++) {
            if (a[i] == d) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}