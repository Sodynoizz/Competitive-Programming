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
#define mpii map<vector<pair<int,int>>,int> mp;
#define vii vector<pair<int, int>>
#define endl '\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(x) (x).begin() , (x).end()
int main() {
    cin.tie(NULL)->ios_base::sync_with_stdio(false);
    int m, n;
    cin >> m >> n;
    mpii mp;
   
    for (int i = 0; i < n; i++) {
        int o; cin >> o;
        int edge = o - 1;
        vii tree;
        for (int j = 0; j < edge; j++) {
            int p1, p2;
            cin >> p1 >> p2;
            tree.emplace_back(p1, p2);
            tree.emplace_back(p2, p1);
        }
    
        sort(tree.begin(), tree.end());
        if(mp[tree]) mp[tree]++;
        else mp[tree] = 1;
    }
    for (int i = 0; i < m; i++) {
        int o; cin >> o;
        int edge = o - 1;
        vii tree;
        for (int j = 0; j < edge; j++) {
            int p1, p2;
            cin >> p1 >> p2;
            tree.emplace_back(p1, p2);
            tree.emplace_back(p2, p1);
        }
        sort(tree.begin(), tree.end());
        if (mp[tree]) cout << mp[tree] << endl;
        else cout << 0 << endl;
    }
    return 0;
}