#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int x = (n + 1) / 2;
    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j < x - i; j++)
            cout << '.';
        cout << 'x';
        if (n % 2 == 0)
            cout << 'x';
        if (i == 0)
        {
            cout << 'x';
        }
        else
        {
            for (int j = 0; j <= i * 2; j++)
                cout << '.';
        }
        cout << 'x';
        if (n % 2 == 0)
            cout << 'x';
        for (int j = 0; j < x - i; j++)
            cout << '.';
        cout << '\n';
    }
    for (int i = 0; i <= (n - 3) * 2; i++)
    {
        cout << 'x';
        for (int j = 0; j < 2 * n - 1; j++)
            cout << '.';
        cout << 'x' << '\n';
    }
    for (int i = x; i >= 0; i--)
    {
        for (int j = 0; j < x - i; j++)
            cout << '.';
        cout << 'x';
        if (n % 2 == 0)
            cout << 'x';
        if (i == 0)
        {
            cout << 'x';
        }
        else
        {
            for (int j = 0; j <= i * 2; j++)
                cout << '.';
        }
        cout << 'x';
        if (n % 2 == 0)
            cout << 'x';
        for (int j = 0; j < x - i; j++)
            cout << '.';
        cout << '\n';
    }
}
