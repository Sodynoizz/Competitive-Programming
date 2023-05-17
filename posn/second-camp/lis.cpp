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

int binarySearch(int a[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (a[mid] == x) return mid;
        if (a[mid] > x) return binarySearch(a, l, mid - 1, x);
        return binarySearch(a, mid + 1, r, x); 
    }
    return -1;
}

int lis(int A[], int n) {
    int l[n];
    int lislen = 0;
    for (int i = 2; i < n + 1; i++) {
        int k = binarySearch(l, 1, i - 1, A[i]);
        l[k] = A[i];
        if (k > lislen) lislen = k;
    }
    return lislen;
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int n; cin >> n;
   int a[n];
   for (int i = 0; i < n; i++) cin >> a[i];
   cout << lis(a, n);
   return 0;
}