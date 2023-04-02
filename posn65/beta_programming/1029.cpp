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

#define endl '\n'
#define long long ll
#define pii pair<int, int>
#define mii map<int, int>
#define vii vector<int, int>
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(x) (x).begin() , (x).end()

int a[100000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, q;
    cin >> n >> m >> q;
    int bruh, num;
    for (int i = 0; i < m; i++) {
        cin >> bruh >> num >> i;
        a[bruh - 1] = (a[bruh - 1] + 1) % 2;
        a[bruh - 1 + num] = (a[bruh - 1 + num] + 1) %2;
    }

    for (int i = 0; i < q; i++) {
        int loc; cin >> loc;
        int l = loc - 1;
        int r = loc;

        while (l && a[l] == 0) l--;
        while (r && a[r] == 0) r--;
        cout << r - l << endl;
    }
    return 0;
}