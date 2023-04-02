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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a[] = {1, 10, 9, 15, 14, 9, 13, 12, 11, 8, 7, 3, 4, 6, 16, 17, 20, 2, 5, 18, 16};
    vector<bool> is_visited(21, false);
    sort(a, a+21);

    for (int i=0; i<21; i++) {
        if (is_visited[i]) continue;
        int cnt = 1;
        for (int j=i+1; j<21; j++) { if (a[i] == a[j]) cnt++, is_visited[j] = true; }
        if (cnt > 1) cout << a[i] << ' '; 
    }    

    return 0;
}