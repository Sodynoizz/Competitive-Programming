#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    string s1[10000005], s2[10000005]; cin >> s1 >> s2;
    int flag = 0; vector<int> v;
    if (s1.size() != s2.size()) { cout << "R.I.P"; return 0; }
    for (int i = 0; i < strlen(s1); i++) toupper(s1[i]);
    cout << s1;
    

    return 0;
}