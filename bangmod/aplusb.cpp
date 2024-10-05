#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int a = s.size(), b = t.size();
    int n = max(a, b);
    if (a < b)
        swap(a, b), swap(s, t);
    t.insert(0, a - b, '0');
    string res(n + 1, '0');
    int car = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int dig = (s[i] - '0') + (t[i] - '0') + car;
        car = dig / 10;
        res[i + 1] = dig % 10 + '0';
    }
    string ans;
    if (car == 1)
        res[0] = '1', ans = res;
    else
        ans = res.substr(1);
    cout << ans;
}