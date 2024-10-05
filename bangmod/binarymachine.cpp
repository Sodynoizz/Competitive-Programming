#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string ans(max(a.size(), b.size()) + 1, '0');
    int i;
    for (i = 0; i < min(a.size(), b.size()); i++)
    {
        ans[i] += a[i] - '0' + b[i] - '0';
        if (ans[i] > '1')
        {
            ans[i + 1] += 1;
            ans[i] -= 2;
        }
    }
    for (i; i < a.size(); i++)
    {
        ans[i] += a[i] - '0';
        if (ans[i] > '1')
        {
            ans[i + 1] += 1;
            ans[i] -= 2;
        }
    }
    for (i; i < b.size(); i++)
    {
        ans[i] += b[i] - '0';
        if (ans[i] > '1')
        {
            ans[i + 1] += 1;
            ans[i] -= 2;
        }
    }
    while (ans.back() == '0')
        ans.pop_back();
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    ans.erase(ans.begin());
    ans.push_back('1');
    cout << ans;
}