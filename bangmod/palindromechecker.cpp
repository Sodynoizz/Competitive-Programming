#include <bits/stdc++.h>

using namespace std;

string s, t = "";

int main()
{
    getline(cin, s);
    for (auto &e : s)
        if (isalpha(e))
            t.push_back(tolower(e));
        else if (isdigit(e))
            t.push_back(e);
    string u = t;
    reverse(u.begin(), u.end());
    if (u == t)
        cout << "1";
    else
        cout << "0";
}