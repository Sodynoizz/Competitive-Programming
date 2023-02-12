#include<bits/stdc++.h>

using namespace std;

int a, b, cnt;
double k[4], x;
char c[4], o;
bool f = 0;
map<char, double> mp;
vector<int> v;
vector<string> s;

int main() {
    scanf("%d %d", &a, &b);
    mp['H'] = (double) b / 2, mp['Q'] = (double) b / 4, mp['E'] = (double) b / 8;
    for (int i = 0; i < 4; i++) {
        scanf(" %c", &c[i]);
        if (c[i] == 'X') {cnt++;continue;}
        if (c[i] == '-') continue;
        x += mp[c[i]];
        k[i] = mp[c[i]];
    }
    int res = 
    if (cnt == 1) {
        if ()
    }
}