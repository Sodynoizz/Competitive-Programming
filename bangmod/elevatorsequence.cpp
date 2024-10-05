#include <bits/stdc++.h>

using namespace std;

int n, m, p, nn;
vector<int> v[2];

int main()
{
    cin >> n >> m >> p;
    cin >> nn;
    while (nn--)
    {
        int a, b;
        cin >> a >> b;
        if (b)
            v[1].emplace_back(a);
        else
            v[0].emplace_back(a);
    }
    sort(v[1].begin(), v[1].end());
    sort(v[0].begin(), v[0].end());
    if (p)
    {
        int cnt = 0;
        for (auto &e : v[p])
            if (e >= m)
            {
                cout << e << "u ";
                cnt++;
                m = e;
            }
        while (cnt--)
            v[p].pop_back();
        m = n;
        p = 0;
    }
    else
    {
        int cnt = 0;
        reverse(v[p].begin(), v[p].end());
        for (auto &e : v[p])
            if (e <= m)
            {
                cout << e << "d ";
                cnt++;
                m = e;
            }
        while (cnt--)
            v[p].pop_back();
        reverse(v[p].begin(), v[p].end());
        m = 1;
        p = 1;
    }
    if (p)
    {
        int cnt = 0;
        for (auto &e : v[p])
            if (e >= m)
            {
                cout << e << "u ";
                cnt++;
                m = e;
            }
        while (cnt--)
            v[p].pop_back();
        m = n;
        p = 0;
    }
    else
    {
        int cnt = 0;
        reverse(v[p].begin(), v[p].end());
        for (auto &e : v[p])
            if (e <= m)
            {
                cout << e << "d ";
                cnt++;
                m = e;
            }
        while (cnt--)
            v[p].pop_back();
        reverse(v[p].begin(), v[p].end());
        m = 1;
        p = 0;
    }
    if (p)
    {
        int cnt = 0;
        for (auto &e : v[p])
            if (e >= m)
            {
                cout << e << "u ";
                cnt++;
                m = e;
            }
        while (cnt--)
            v[p].pop_back();
        m = n;
        p = 0;
    }
    else
    {
        int cnt = 0;
        reverse(v[p].begin(), v[p].end());
        for (auto &e : v[p])
            if (e <= m)
            {
                cout << e << "d ";
                cnt++;
                m = e;
            }
        while (cnt--)
            v[p].pop_back();
        reverse(v[p].begin(), v[p].end());
        m = 1;
        p = 0;
    }
    if (p)
    {
        int cnt = 0;
        for (auto &e : v[p])
            if (e >= m)
            {
                cout << e << "u ";
                cnt++;
                m = e;
            }
        while (cnt--)
            v[p].pop_back();
        m = n;
        p = 0;
    }
    else
    {
        int cnt = 0;
        reverse(v[p].begin(), v[p].end());
        for (auto &e : v[p])
            if (e <= m)
            {
                cout << e << "d ";
                cnt++;
                m = e;
            }
        while (cnt--)
            v[p].pop_back();
        reverse(v[p].begin(), v[p].end());
        m = 1;
        p = 0;
    }
}