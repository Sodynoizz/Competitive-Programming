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
vector<int> L;
int A[1000005];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N; cin >> N;
    for (int i = 1; i<= N; i++) cin >> A[i];
    for (int t = 1; t <= N; t++) {
        int x = A[t];
        auto it = upper_bound(L.begin(), L.end(), x);
        if (it == L.end()) L.push_back(x);
        else *it = x;
    }
    cout << N - L.size();
    return 0;
}
