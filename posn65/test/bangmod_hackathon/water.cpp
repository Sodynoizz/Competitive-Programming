#include <bits/stdc++.h>

using namespace std;

int a, b, c, x;
string s;
vector<int> v;

int main(){
    scanf("%d %d %d", &a, &b, &c);
    int res[3] = {a, b, c};
    getline(cin, s);
    while (getline(cin, s)) {
        v.clear();
        int cur = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                v.emplace_back(cur);
                cur = 0;
                continue;
            }
            else if (isalpha(s[i])) {
                if (s[i] != 'n') printf("error"), exit(0);
            } else {
                cur *= 10, cur += (s[i] - '0');
            }
        }
        for (int i = 0; i < v.size(); i+=2) {
            if (!(i & 1)) res[v[i]] -= v[i + 1];
        }
    }
    printf("error");
}