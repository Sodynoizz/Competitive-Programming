#include <bits/stdc++.h>
using namespace std;

string vow = "aeiouAEIOU";

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n > 5 || n == 0)
    {
        cout << "error";
        return 0;
    }
    if (n == 1)
    {
        string s;
        cin >> s;
        cout << s;
        return 0;
    }
    string a, b;
    vector<string> mid;
    cin >> a;
    for (int i = 0; i < n - 2; i++)
    {
        string s;
        cin >> s;
        mid.push_back(s);
        for (char c : s)
        {
            if (!isalpha(c))
            {
                cout << "error";
                return 0;
            }
        }
    }
    cin >> b;
    string na, nb;
    bool ok = 0;
    int ai, bi;
    for (ai = 0; ai < a.size(); ai++)
    {
        int i = ai;
        if (!isalpha(a[i]))
        {
            cout << "error";
            return 0;
        }
        for (char c : vow)
        {
            if (c == a[i])
            {
                ok = 1;
                break;
            }
        }
        if (ok)
            break;
        nb.push_back(a[i]);
    }
    ok = 0;
    for (bi = 0; bi < b.size(); bi++)
    {
        int i = bi;
        if (!isalpha(b[i]))
        {
            cout << "error";
            return 0;
        }

        for (char c : vow)
        {
            if (c == b[i])
            {
                ok = 1;
                break;
            }
        }
        if (ok)
            break;
        na.push_back(b[i]);
    }
    for (ai; ai < a.size(); ai++)
    {
        na.push_back(a[ai]);
    }
    for (bi; bi < b.size(); bi++)
    {
        nb.push_back(b[bi]);
    }
    cout << na << ' ';
    for (string s : mid)
        cout << s << ' ';
    cout << nb << ' ';
}