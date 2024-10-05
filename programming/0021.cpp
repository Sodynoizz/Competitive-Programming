#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 0, j = 0;
    string s; getline(cin, s);
    while (s[i] != '\0') { if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') s[i + 1] = 1, s[i + 2] = 1;  i++; }
    while (s[j] != '\0') { if (s[j] != 1) cout << s[j]; j++; };
    return 0;
}