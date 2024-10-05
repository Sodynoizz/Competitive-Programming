#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vii = vector<pair<int, int>>;

#define endl '\n'

int w[4], l[4], score[4];

bool compare(int i, int j) {
    if (score[i] != score[j]) return score[i] > score[j];
    if (w[i] - l[i] != w[j] - l[j]) return w[i] - l[i] > w[j] - l[j];
    return w[i] > w[j];
}

int main() {
    string s[4];
    int a[4][4];
    for (int i = 0; i < 4; i++) cin >> s[i];
    for (int i = 0; i < 4; i++) 
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
            w[i] += a[i][j], l[i] += a[i][j];
        }
    
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (a[i][j] == a[j][i]) score[i]++, score[j]++;
            else if (a[i][j] > a[j][i]) score[i] += 3;
            else score[j] += 3;
        }
    }

    vector<int> v = {0, 1, 2, 3};
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < 4; i++) cout << s[v[i]] << ' ' << score[v[i]] << endl;    
    return 0;
}