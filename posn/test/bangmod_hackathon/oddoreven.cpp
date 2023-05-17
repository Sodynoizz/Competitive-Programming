#include<bits/stdc++.h>

using namespace std;

string s;

int main() {
    cin >> s;
    printf("%s", (!((int) s.size() & 1) ? "even" : "odd"));
}