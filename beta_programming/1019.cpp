#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int max_len = 0;
    for (int i = 0; i < s1.size(); i++) {
        int len = 0;
        for (int j = 0; j < s2.size(); j++) {
            if (s1[i] == s2[j]) len++, i++;
            max_len = max(max_len, len);
        }
    }
    cout << s1.substr(0, max_len);
    return 0;
}