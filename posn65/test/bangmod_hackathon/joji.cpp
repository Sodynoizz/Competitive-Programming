#include<bits/stdc++.h>

using namespace std;

int n, cnt;
vector<int> t;

int main() {
    scanf("%d", &n);
    vector<int> v(n);
    for (auto &e: v) scanf("%d", &e);
    if (n == 1) {t.emplace_back(0), cnt++;}
    else {
        for (int i = 0; i < v.size(); i++) {
            if (i == 0) {
                if (v[i] > v[i + 1]) cnt++, t.emplace_back(i);
            } else if (i == v.size() - 1) {
                if (v[i] > v[i - 1]) cnt++, t.emplace_back(i);
            } else if (v[i] > v[i + 1] && v[i] > v[i - 1]) cnt++, t.emplace_back(i);
        }
    }
    if (cnt == 0) {
        printf("There is no lift hill");
    } else if (cnt == 1) {
        printf("There is %d lift hill at index(height):", cnt);
        for (auto &e: t) {
            printf(" %d(%d)", e, v[e]);
        }
    } else {
        printf("There are %d lift hills at index(height):", cnt);
        for (auto &e: t) {
            printf(" %d(%d)", e, v[e]);
        }
    }
}