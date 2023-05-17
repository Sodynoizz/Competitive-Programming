#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(0)->ios_base::sync_with_stdio(false);
#define endl '\n'

int main() {
    boost;
    int n; cin >> n;
    vector<int> v;
    priority_queue<int> pq;
    while (n--) {
        char c; cin >> c;
        if (c == 'P') { int x; cin >> x; pq.emplace(x); }
        else if (c == 'Q') { 
            if (pq.empty()) v.push_back(-1);
            else { v.emplace_back(pq.top()); pq.pop(); } 
        }
    }
    for (auto e: v) cout << e << endl;
    return 0;
}