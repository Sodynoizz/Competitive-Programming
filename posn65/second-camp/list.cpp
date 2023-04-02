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

int node[5] = {34, 13, 52, 16, 12};

int find(int key) {
    for (int i=0; i<5; i++) {
        if (node[i] == key) return i;
    } 
    return -1;
}

void printArray(int size) {
    for (int i=0; i<size; i++) cout << node[i] << ' ';
}

void insert(int val, int pos) {
    for (int i=4; i>=pos; i--) node[i+1] = node[i];
    node[pos] = val;
    printArray(5);
}

void _delete(int pos) { 
    for (int i=pos; i<4; i++) node[i] = node[i+1];
    printArray(4);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    return 0; 
}