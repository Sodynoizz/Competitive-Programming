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
    int n; cin >> n;
    int a[n], dp[15];
    vector<int> v;

    for (int i = 1; i <= n; i++) { cin >> a[i]; dp[i] = a[i]; }
    
    v.emplace_back(dp[n]);

    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= n; j++) 
            if (i + j == n) v.emplace_back(dp[i] + dp[j]);
            
        
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= n; j++) 
            for (int k = 1; k <= n; k++) 
                if (i + j + k == n) 
                    v.emplace_back(dp[i] + dp[j] + dp[k]);


    for (int i = 1; i <=n; i++) if (n % i == 0) v.emplace_back(dp[i] * (n / i)); 
    cout << *max_element(v.begin(), v.end());
    return 0;
}