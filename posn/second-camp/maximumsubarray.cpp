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
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(x) (x).begin() , (x).end()

int max(int a, int b, int c) { return max(max(a, b), c); }

int maxcrossingsum(int a[], int low, int mid, int high) {
    int sum = 0;
    int left_sum = INT_MIN;
    // LHS
    for (int i=mid; i>=low; i--) {
        sum += a[i];
        if (left_sum < sum) left_sum = sum; 
    }

    sum = 0;
    int right_sum = INT_MIN;
    // RHS
    for (int i=mid; i<=high; i++) {
        sum += a[i];
        if (right_sum < sum) right_sum = sum;
    }

    
    return max(left_sum, right_sum, left_sum + right_sum - a[mid]);
}

int maximumSubArraySum(int a[], int low,int high) {
    if (low > high) return INT_MIN;
    if (low == high) return a[low];
    int mid = (low + high) / 2;
    
    return max(maximumSubArraySum(a, low, mid - 1),
           maximumSubArraySum(a, mid + 1, high),
           maxcrossingsum(a, low, mid, high));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a[] = {-1, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    cout << maximumSubArraySum(a, 0, n - 1);
    return 0;
}