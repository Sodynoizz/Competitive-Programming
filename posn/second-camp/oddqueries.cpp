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

int a[200005];
int b[200005];

void solve() {
    int p,q, r, s, t, sum=0;
    cin>>p>>q;
    for (int i=0; i<p; i++) {
        cin>>a[i];
        b[i] = a[i];
    }
    for (int j=0; j<q; j++) {
        cin >> r >> s >> t;
        sum = 0;
        for (int k=r; k<=s; k++) a[k-1] = t;
        for (int i=0; i<p; i++) sum += a[i];
        

        if (sum%2) cout << "YES\n"; else cout << "NO\n";    
        for (int l=r; l<=s; l++) a[l-1] = b[l-1];
    }

    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;
    while (n--) solve();
    

    return 0;
}