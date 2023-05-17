#include <bits/stdc++.h>
using namespace std;
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x:v) os << sep << x, sep = ", "; return os << '}'; }

void dbg_out() { cerr << endl; }
template<typename Head, typename ... Tail> void dbg_out(Head H, Tail ... T) { cerr << ' ' << H; dbg_out(T...); }

#define dbg(...) cerr << '(' << #__VA_ARGS__ << '):', dbg_out(__VA_ARGS__)

#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(x) (x).begin() , (x).end()

template <typename T> void print(T x) { cout << x; }

int *resize(int *ptr, int *size) {
    int *temp = new int[2*(*size)];
    for (int i=0; i<(*size); i++) {
        temp[i] = ptr[i];
        delete ptr;
        ptr = temp;
        (*size) *= 2;
        return ptr;
    }
}

int main() {
    cin.tie(NULL) -> sync_with_stdio(false);
    int sz = 5;
    int *ptr = new int[sz];
    for (int i=0; i<sz; i++) cin >> ptr[i];
    ptr = resize(ptr, &sz);
    cout << sz << endl;
}