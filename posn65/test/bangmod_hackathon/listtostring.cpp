#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using pii = pair<int, int>;

ll n;
string s;
vector<ll> v;
bool f = 0;

int main() {
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) n *= 10, n += (s[i] - '0');
        else {
            if (s[i] == '[') continue;
            else if (s[i] == ']') {
                if (f)v.emplace_back(n*(-1));
                else v.emplace_back(n);
            }
            else if (s[i] == ',') {
                if (f) v.emplace_back(n* (-1));
                else v.emplace_back(n);
                n = 0, f = 0;
            }
            else if (s[i] == '-') f = 1;
        }
    }
    sort(v.begin(), v.end(), greater<ll>());
    for (ll &e: v) printf("%lld ", e);
}