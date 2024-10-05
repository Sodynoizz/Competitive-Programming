#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans;
    int shift = 0;
    bool change = 0;
    for (char c : s)
    {
        if (c >= '0' && c <= '9')
        {
            cout << c;
            int num = c - '0';
            if (num != 0)
                shift = num, shift = round((double)shift * shift - 5.5 * shift);
            else
                change = !change;
        }
        else if (c >= 'a' && c <= 'z')
        {
            char pb = c + shift;
            while (pb > 'z')
                pb -= 26;
            while (pb < 'a')
                pb += 26;
            if (change)
                pb += 'A' - 'a';
            cout << pb;
        }
        else
        {   
            char pb = c + shift;
            while (pb > 'Z')
                pb -= 26;
            while (pb < 'A')
                pb += 26;
            if (change)
                pb += 'a' - 'A';
            cout << pb;
        }
    }
}