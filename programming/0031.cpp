#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false)

int main() {
    boost; int a, cnt = 0;
    priority_queue<int> pq;
    for (int i = 0; i < 3; i++) cin >> a, pq.emplace(a); 
    while (!pq.empty()) { int n = pq.top(); pq.pop(); if (n > 1) pq.emplace(n / 2), cnt++; }
    cout << cnt;
    return 0;
}